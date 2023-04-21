#include <stdio.h>
#include <stdlib.h>

//TYPE NAME = VALUE;
// a[i]: a[i] = *(a+i) = *(p+i) = p[i]
// &a[i]: &a[i] = a+i = p+i = &p[i];

int main()
{
    int a[] = {5, 1, 7, 2, 8, 3};
    int y;
    int *p = &a[1];

    //(*--p)++; // (*)(--p)++; 
    y = (*--p)++;
    printf("%d\n", y);
    printf("%p-->%d\n", &a[0], a[0]);
    printf("%p-->%d\n", p, *p);

#if 0
    int a[3];
    int *p = a;
    int i;

    for (i = 0; i < sizeof(a)/sizeof(a[0]); i++) {
        printf("%p-->%d\n", &a[i], a[i]);
    }

    for (i = 0; i < sizeof(a)/sizeof(a[0]); i++) {
        scanf("%d", p++);
    }

    p = a;

    for (i = 0; i < sizeof(a)/sizeof(a[0]); i++, p++) {
        printf("%p-->%d\n", p, *p);
    }
#endif

#if 0
    int a[3] = {1,2,3};
    int *p = a;
    int i;

    /* 数组名与指针 */
    //a++; //a = a + 1; 数组名为地址常量，不能做修改
    p++;   //p = p + 1; 修改指针p指向的地址

    /* p++ 与 p+1 */
    //p++;
    //p + 1;

    printf("a=%p, a+1=%p\n", a, a + 1);
    printf("p=%p, p+1=%p\n", p, p + 1);

    for (i = 0; i < sizeof(a)/sizeof(a[0]); i++) {
        printf("%p --> %d\n", a + i, a[i]);
        printf("%p --> %d\n", p + i, p[i]);
        printf("%p --> %d\n", p + i, *(p + i));
    }

    printf("\n");
#endif

    exit(0);
}
