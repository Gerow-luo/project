#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i = 12;
    int j = 9;
    int n;

    n = 2;
    //将第n位置1
    i = i | 1 << n;

    //将第n位置0
    i = i & ~(1 << n);

    //测试第n位为0还是1
    if (i & 1 << n) {
        printf("true\n");
    } else {
        printf("flase\n");
    }

    exit(0);
}
