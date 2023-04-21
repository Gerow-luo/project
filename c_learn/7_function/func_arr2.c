#include <stdio.h>
#include <stdlib.h>

#define M   3
#define N   4

void printf_arr2(int (*p)[N], int m, int n)
{
    int i, j;
    
    for (i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            printf("%d ", p[i][j]);
        }
        printf("\n");
    }

}

int average_score(int *p, int n)
{
    float sum;
    int i;

    sum = 0;
    for(i = 0; i < n; i++) {
        sum += p[i];
    }

    return sum / n;
}

#if 0
void get_stu_score(int (*p)[N], int num)
{
    int i;

    for(i = 0; i < N; i++) {
        //printf("%d ", p[num][i]);
        printf("%d ", *(*(p+num)+i));
    }
    printf("\n");
    
}
#else
int *get_stu_score(int (*p)[N], int num)
{
    if (num > M) {
        return NULL;
    }

    return *(p + num);
}
#endif

int main()
{
    int a[M][N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int ave;
    int *res;
    int i;

    //printf_arr2(a, M, N);

    //ave = average_score(*a, M*N);
    //printf("ave = %d\n", ave);

    res = get_stu_score(a, 1);
    if (res != NULL) {
        for (i = 0; i < N; i++)
            printf("%d ", *(res++));
    }
    printf("\n");

    return 0;
}

