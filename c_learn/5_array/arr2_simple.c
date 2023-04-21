#include <stdio.h>
#include <stdlib.h>

#define M   3
#define N   3

int main()
{
    int arr[M][N] = {{1,2,3}, {4,5,6}};
    int i, j;

#if 0
    for (i = 0; i < M; i++) {
        for(j = 0; j < N; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
#endif

    printf("%p\n", arr);

    for (i = 0; i < M; i++) {
        for(j = 0; j < N; j++) {
            printf("%p--->%d \n", &arr[i][j], arr[i][j]);
        }
    }

    exit(0);
}
