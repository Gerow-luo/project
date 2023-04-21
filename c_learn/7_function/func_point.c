#include <stdio.h>
#include <stdlib.h>

#define N   2

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

//指针函数
int *func(int *p, int n)
{

    return p;
}

int main()
{
    int i;
    int a, b;
    int res;
    int (*p)(int, int);     //函数指针
    int (*q)(int, int);     //函数指针
    int (*funcp[N])(int, int);  //函数指针数组

    a = 3;
    b = 5;

    p = add;
    q = sub;
    res = (*p)(a, b);
    printf("%d\n", res);

    res = (*q)(a, b);
    printf("%d\n", res);

    funcp[0] = add;
    funcp[1] = sub;

    for (i = 0; i < N; i++) {
        printf("%d\n", funcp[i](a, b));
    }

    pthread_create()

    return 0;
}
