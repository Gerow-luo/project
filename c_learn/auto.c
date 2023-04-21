#include <stdio.h>
#include <stdlib.h>

#if 0
void func(void)
{
    //int x = 0;    //地址和内存空间随着函数的调用而创建，函数退出后就释放地址和内存。
    static int x = 0; //地址和内存被创建和分配之后，会直到程序(main)退出时才会释放，否者程序中调用的static变量都是使用同一个地址。

    x= x + 1;

    printf("%p->%d\n", &x, x);
}

int main()
{
    int i;
    auto int j;     //默认不会初始化，会被赋值为随机值
    static int k;   //默认会被初始化为0或者空

    printf("int i = %d\n", i);
    printf("auto int j = %d\n", j);
    printf("static k = %d\n", k);

    func();
    func();
    func();

    exit(0);
}
#endif

#if 0
//局部变量与全局变量的区别
int  i = 100;

void func(int i)
{
    printf("i = %d\n", i);
}

int main()
{
     int i = 3;

     func(i);
     {
         int i = 5;
         printf("i = %d\n", i);
     }

     exit(0);
}
#endif

//全局变量的缺点: 很多地方都可以使用，导致使用的时候会有不确定性
int i = 0;

void print_star(void)
{
    for(i = 0; i < 5; i++)
        printf("*");
    printf("\n");
    printf("[%s]i = %d\n",__func__, i);
}

int main()
{
    for(i = 0; i < 5; i++)
        print_star();

    printf("[%s]i = %d\n",__func__, i);
    exit(0);
}



