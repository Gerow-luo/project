#include <stdio.h>
#include <stdlib.h>

#define PI      3.141593    //标识常量
#define ADD     (2 + 3)
#define ADD2     2 + 3
//#define MAX(a,b)     a > b ? a : b            //无括号，表达式优先级会出问题
//#define MAX(a,b)     ((a) > (b) ? (a) : (b))  //不稳定
#define MAX(a,b)     \
        ({typeof(a) A=a,B=b; ((A) > (B) ? (A) : (B));}) //typeof(a), 获取变量参数a的类型

#if 0
int max(int a, int b)
{
    return a > b ? a : b;
}
#endif

//标识常量，预处理内容：
int main()
{
#if 0
    int a, b, c;

    a * PI; /* PI内容会在预处理时将内容替换 */
    b + 3.14;
    c / PI;
#endif

#if 0 /* 使用带参宏实现一些表达式时，需要注意将每一步计算使用括号 */
    printf("ADD=%d\n", ADD * ADD);      // 2+3*2+3
    printf("ADD2=%d\n", ADD2 * ADD2);   // (2+3)*(2+3)
#endif

#if 1
    int i = 5, j = 3;

    printf("i = %d\tj = %d\n", i, j);
    printf("%d\n", MAX(i++, j++));      //大的数传进去会被++两次
    printf("i = %d\tj = %d\n", i, j);
#endif

    exit(0);
}
