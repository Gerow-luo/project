#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p = NULL;

    p = malloc(sizeof(int));
    if (p == NULL) {
        printf("malloc() error\n");
        exit(1);
    }

    *p = 10;
    printf("%p ---> %d\n", p, *p);

    free(p);

    //解决方式：
    p = NULL;

    //free后继续使用
    *p = 123;
    printf("%p ---> %d\n", p, *p);

    exit(0);
}
