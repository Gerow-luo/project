#include <stdio.h>
#include <stdlib.h>

union {
    struct {
        char a:1;   //表示a在内存中占一位
        char b:2;
        char c:1;
    } x;
    char y;
} w;

int main()
{
    //共用体的存储特点，以及端序问题 0 00 0
    //x86为大端序，数据从右往左存储：c b  a
    w.y = 6; //0110
    w.y = 5; //0101
    printf("%d\n", w.x.a); //000 1  //有符号数，ASCLL求二进制：绝对值取反+1, 
                                    //          二进制->ASCLL：-1取反取绝对值
    printf("%d\n", w.x.b); //0 10 0
    printf("%d\n", w.x.c); //0 000

    exit(0);
}
