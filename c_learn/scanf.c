#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

#define STR_LEN 32

int main()
{
    int ret;
    int i;
    float f;
    char ch, str[STR_LEN];

    printf("Please enter:\n");

    /*
     * scanf使用时需要注意的问题：
     * 1.使用scanf()输入字符串时，输入的内容可能会大于接收变量的长度，会造成溢出
     * 2.再循环中使用scanf时,需要对scanf的返回值做判断，防止输入失败造成死循环。
     * 3.多个scanf()使用时，scanf之间需要注意去除换行、tab、空格等这些不是输入给变量的字符
     * */

#if 0
    scanf("%d%f", &i, &f);

    printf("i = %d\n", i);
    printf("f = %f\n", f);

    scanf("%s", str);   /* 存在越界的危险 */
    printf("str = %s\n", str);

    while(1) {
        //循环需要判断输入是否有效或者是否匹配，成功则返回输入成功输入的参数个数
        ret = scanf("%d", &i);
        printf("ret=%d\n", ret);
        if (ret != 1) {
            printf("Enter error, not match\n");
            break;
        }

        ret = scanf("%d%f", &i, &f);
        printf("ret=%d\n", ret);    //两个参数，成功输入则返回两个
        if (ret != 2) {
            printf("Enter error, not match\n"));
            break;
        }
        printf("i = %d\tf = %f\n", i, f);
    }
#endif

    /* 抑制符的使用 */
    scanf("%d", &i);
    getchar();  //与下面的抑制符作用类似，先吃掉回车等符号。
    //scanf("%c", &ch);   //第一个输入之后，回车或者tab，空格等输入都会被接受到第二个scanf
    scanf("%*c%c", &ch);    //在输出前加一个抑制符*，表示不将该符号输入给后面的参数

    printf("i=%d, ch=%c\n", i , ch);

    exit(0);
}
