#include <stdio.h>
#include <stdlib.h>

#define A_DEF_MONEY     100
#define B_DEF_MONEY     100
#define A_INT_RATE      0.1     /* 单利息 */
#define B_INT_RATE      0.05    /* 复利息 */

int main()
{
    float sum_a, sum_b;
    int i, years;

    years = 0;
    sum_a = A_DEF_MONEY;
    sum_b = B_DEF_MONEY;

    while(sum_b <= sum_a) {
        sum_a += A_DEF_MONEY * A_INT_RATE;  /* 单利息增长，每年利息固定 */
        sum_b += sum_b * B_INT_RATE;        /* 复利息增长，每年利息不变，本金等于上一年的利息加上一年的本金 */
        years++;
    }

    printf("years = %d\n", years);
    printf("sum_a = %f\n", sum_a);
    printf("sum_b = %f\n", sum_b);

    exit(0);
}
