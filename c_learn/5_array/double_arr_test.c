#include <stdio.h>
#include <stdlib.h>

#define M      5
#define N      4

void row_line_switch()
{
    int i, j;
    int a[M][N] = {1, 2, 3, 4, 5, 6}, b[N][M];

    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            printf("%d ", a[i][j]);
            b[j][i] = a[i][j];
        }
        printf("\n");
    }

    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
}

void get_max()
{
    int a[M][N] = {43, 4, 23, 89, 9, 7};
    int i, j;
    int max, row, line;

    max = a[0][0];
    row = 0;
    line = 0;
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            if (max < a[i][j]) {
                max = a[i][j];
                row = i;
                line = j;
            }
        }
    }

    printf("row = %d, line = %d, max = %d\n", row, line, max);

}

void get_sum(void)
{
    int i, j;
    int a[M][N] = {{3, 4, 23}, {89, 9, 7}, {3, 5, 10}, {1, 9, 2}};

    for (i = 0; i < M - 1; i++) {
        for (j = 0; j < N - 1; j++) {
            a[M-1][N-1] += a[i][j];
            a[M-1][j] += a[i][j];
            a[i][N-1] += a[i][j];
        }
    }

    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }

}

#define R   3
#define P   2
#define K   2

void get_mul(void)
{
    int i, j, k;
    int a[R][P] = {1, 2, 3, 4, 5, 6};
    int b[P][K] = {1, 0, 0, 1, 1, 0};
    int c[R][K] = {0};

    for (i = 0; i < R; i++) {
        for (j = 0; j < K; j++) {
            for (k = 0; k < P; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    for (i = 0; i < R; i++) {
        for (j = 0; j < K; j++) { 
            printf("%4d", c[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    //row_line_switch();

    //get_max();

    //get_sum();

    get_mul();

    exit(0);
}
