#include <stdio.h>
#include <stdlib.h>

#define STRSIZE     32

int main()
{

    int i = 123;
    float f = 123.45678;
    char str[STRSIZE] = "helloworld";

    printf("i = %4d\n", i);
    printf("i = %+4d\n", i);

    printf("f = %2f\n", f);
    printf("f = %.3f\n", f);

    printf("%.5s\n", str);
    printf("%10.5s\n", str);
    printf("str=%-10.5s[over]\n", str);

    exit(0);
}
