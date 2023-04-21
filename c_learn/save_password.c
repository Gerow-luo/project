#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <sys/file.h>
#include <string.h>

#define TTY_FILE_MODE  (S_IRWXU|S_IRWXG|S_IRWXO)

/* 封装write系统调用，保证write足够的字节数 */
static inline int tty_write(int fd, void *buf, int len)
{
    int left, ret;
    char *tmp_buf;
    int  flags;

    flags = fcntl(fd, F_GETFL, 0);
    (void)fcntl(fd, F_SETFL, (~O_NONBLOCK) & flags);
    left = len;
    tmp_buf = (char *) buf;
    while (left > 0) {
        ret = (int)write(fd, tmp_buf, left);
        if (ret < 0) {
            switch (errno) {
            case EINTR:
                /* FALLTHROUGH */
            case EAGAIN:
                /* FALLTHROUGH */
            case EINPROGRESS:
                /* FALLTHROUGH */
#if (EWOULDBLOCK != EAGAIN)
            case EWOULDBLOCK:
#endif /* (EWOULDBLOCK != EAGAIN) */
                continue;
            default:
                break;
            }
            return ret;
        }
        tmp_buf += ret;
        left -= ret;
    }
    return len;
}

int save_passwd(u_char *str, unsigned int size, char *pswd_shadow)
{
    int fd, len;

    if (str == NULL || pswd_shadow == NULL) {
        return -1;
    }
    
    fd = open((char *)pswd_shadow, O_RDWR|O_CREAT|O_CLOEXEC, TTY_FILE_MODE);
    if (fd < 0) {
        return -2;
    }
    (void)flock(fd, LOCK_EX);
    /* 这个还是要有一次仅仅保留一个密码 */
    if (ftruncate(fd, 0) != 0) {
        /* 失败的话，继续写没有意义 */
        (void)flock(fd, LOCK_UN);
        close(fd);
        return -3;
    }
    len = (int)tty_write(fd, str, size);
    (void)flock(fd, LOCK_UN);
    fsync(fd);
    close(fd);
    
    if (len <= 0) {
        return -4;
    }
    return 0;
}


int main()
{

    char *pwd = "Nihao123!";
    char *pwd1 = "Nihao123!";
    char *path = "./password.text";
    char *path1 = "./password1.text";

    save_passwd(pwd, strlen(pwd), path);
    save_passwd(pwd1, strlen(pwd1), path1);


    return 0;
}
