#include <stdio.h>

int main(void)
{
    int *p;
    printf("Hello World!\n");

    p = malloc(sizeof(int));
    if (p == NULL) {
        return -1;
    }

    return 0;
}

