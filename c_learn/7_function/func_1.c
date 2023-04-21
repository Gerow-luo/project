#include <stdio.h>
#include <stdlib.h>

int print_value(int i, int j)
{
    printf("%d %d\n", i, j);

    return 0;
}


void switch_value(int *i, int *j)
{
    int tmp;

    tmp = *i;
    *i = *j;
    *j = tmp;

}

int main(int argc, char *argv[])
{
    int i = 3, j = 5;

   // for (i = 0; i < argc; i++) {
    for (i = 0; argv[i] != NULL; i++) {
        printf("%s\n", argv[i]);
    }

    //值传递
    //print_value(i, j);

    //地址传递
    //switch_value(&i, &j);

    //printf("i= %d, j=%d\n", i, j);

    return 0;
}

