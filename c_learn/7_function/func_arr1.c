#include <stdio.h>
#include <stdlib.h>

/*
 * 作为形参时：
 * int *p == int p[];
 * int **p == int *p[];
 * */
//void print_arr(int *p, int n)
void print_arr(int p[], int n)
{
    int i;

    printf("sizeof(p)=%d\n", sizeof(p));

    for (i = 0; i < n; i++) {
        printf("%d ", p[i]);
    }
    printf("\n");

}

void rever_order(int *p, int n)
{
    int i, j, tmp;
    int m;
    m = (n - 1) / 2;

    for (i = 0; i <=m; i++) {
        j = n - 1 - i;
        tmp = p[i];
        p[i] = p[j];
        p[j] = tmp;
    }


}

int main()
{
    int i;
    int arr[] = {1, 2, 3, 4, 5, 17};

    print_arr(arr, sizeof(arr)/sizeof(*arr));

    rever_order(arr, sizeof(arr)/sizeof(*arr));

    print_arr(arr, sizeof(arr)/sizeof(*arr));

    return 0;
}


