#include <stdio.h>
#include <stdlib.h>

/* 
 * 注意：这里形参中的指针p和main函数中的p不是同一个，
 * 形参中的p申请内存了，但是没有释放；
 * main函数中的指针p没有申请内存，但是free了。
 * 解决方式：
 * （1）实参传递main函数的指针p的地址
 * （2）将func中申请到的地址返回给main函数的指针p
 * */
#if 0
//ERR:void func(int *p, int num)
{
    p = malloc(sizeof(int) * num);
    if (p == NULL)
        exit(1);
    return;
}
#else
//解决方式1：
void func(int **p, int num) //指向指针地址的指针，需要二级指针
{
    *p = malloc(sizeof(int) * num);
    if (*p == NULL)
        exit(1);
    return;
}
#else
//解决方式2：
void *func(int num) //指向指针地址的指针，需要二级指针
{
    int *p = NULL;

    p = malloc(sizeof(int) * num);
    if (p == NULL)
        exit(1);
    return p;
}
#endif

int main()
{

    /* 问题1： */
#if 1
    int num = 100;
    int *p = NULL;

#if 0
    func(p, num);
#else
    func(&p, num);
#else
    p = func(num);
#endif

    free(p);
#endif

    /* (2) 动态内存分配与变成数组 */
#if 0
    int *p;
    int num = 5;

    p = malloc(sizeof(int) * num);
    if (p == NULL) {
        printf("malloc() error!\n");
        exit(1);
    }

    for (i = 0; i < num; i++) {
        scanf("%d", &p[i]);
    }
    for (i = 0; i < num; i++) {
        printf("%d\n", p[i]);
    }
    printf("\n");
    free(p);
#endif

    /* (1) malloc()函数的使用与返回值 */
#if 0
    int *p = NULL;

    p = malloc(sizeof(int));
    //malloc的返回值不需要强转成其他类型,如果编译报警告，则说明没包含头文件
    //p = (int *)malloc(sizeof(int));
    if (p == NULL) {
        printf("malloc() error!\n");
        exit(1);
    }

    *p = 10;

    printf("%d\n", *p);

    free(p);
#endif
    exit(0);
}
