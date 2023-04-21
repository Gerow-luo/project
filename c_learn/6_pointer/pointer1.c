#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 1;
    int *p;
    p = &i;
    int **q = &p;

    printf("sizeof(i)=%ld\n", sizeof(i));
    /* 同一个系统架构里面，不同类型的指针的大小都是一样 */
    printf("sizeof(int *) = %ld\n", sizeof(int *));
    printf("sizeof(float *) = %ld\n", sizeof(float *));
    printf("sizeof(double *) = %ld\n", sizeof(double *));
    printf("sizeof(char *) = %ld\n", sizeof(char *));

    printf("i = %d\n", i);
    printf("&i = %p\n", &i);
    printf("p = %p\n", p);
    printf("*p = %d\n", *p);
    printf("&p = %p\n", &p);
    printf("*q = %p\n", *q);
    printf("**q = %d\n", **q);
    printf("q = %p\n", q);

    exit(0);
}
