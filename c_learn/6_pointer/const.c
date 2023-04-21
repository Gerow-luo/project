#include <stdio.h>
#include <stdlib.h>

/*
 * 指针使用const修饰有两种情况：1. const 修饰p, p为指针 2.const 修饰*p， *p为常量
 * const int *p;    //常量指针, 修饰的是*p,即*p的内容不能修改
 * int const *p;    //常量指针
 *
 * int *const p;    //指针常量，修订的是p, 即p的指向不能修改
 * const int *const p;
 *
 * 
 * */

int main()
{
#if 1
    int i = 1;
    int j = 100;
    const int  *const p = &i;

    //p、*p都被const修饰，所以都不能改变
    //F p = &j;
    //F *p = j;

    printf("%d\n", *p);

#endif

#if 0 /* 指针常量 */
    int i = 1;
    int j = 100;
    int * const p = &i;

    *p = 10;    //正确，可以修改指针常量的值
    //F p = &j;     //错误，不能修改指针常量的指向

    printf("%d\n", *p);
#endif

#if 0  /* 常量指针 */
    int i = 1;
    int j = 100;
    const int *p=&i;    //常量指针，指针的值不能修改，指针的指向可以修改指向

    i = 10;
    //*p = 10;    //错误，*p为const修饰，值不能改变
    p = &j;       //正确，p的指向可以改变

    printf("%d\n", i);
#endif

#if 0
    const float pi = 3.14;  //使用变量保存一个常量的值，所以用const修饰变量，使其变成不能改变的变量
    const float *p = &pi;  //指向const修饰的变量的指针也需要用const修饰

    //pi = 3.1415; //错误
    //const只对修饰的内容有效，所以可以通过其他非const修饰的来改变。
    //*p = 3.14159;   //有问题，通过其他方式修改const变量的值

    printf("%f\n", pi);
#endif

    exit(0);
}
