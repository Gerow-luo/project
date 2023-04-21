#include <stdio.h>
#include <stdlib.h>

char *my_strcpy(char *dest, const char *src)
{
    char *ret = dest;

    if (dest != NULL && src != NULL) {
        while((*dest++ = *src++) != '\0');
    }

    return ret;
}

char *my_strncpy(char *dest, const char *src, size_t n)
{
    int i;

    for (i = 0; i < n && (src[i] != '\0'); i++) {
        //*(dest++) = *(src++);
        dest[i] = src[i];
    }

    for ( ; i < n; i++ )
        dest[i] = '\0';

    return dest;
}

int main()
{
    char src[] = "HelloWorld";
    char dst[128];
    char dst2[128];

    my_strcpy(dst, src);
    printf("%s\n", dst);
    my_strncpy(dst2, src, 5);
    printf("%s\n", dst2);

    strncpy()

    return 0;
}
