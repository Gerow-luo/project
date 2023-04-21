#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define HYDRONE_WEIGHT   3.0e-23
#define QUARTS      950

void water(void)
{
    float num;
    float sum;

    printf("Please enter the num of quarts:\n");
    scanf("%f", &num);

    /* 
     * 1. 对scanf返回值进行判断
     * 2. 对输入的参数的有效性进行判断
     * */
    if (num < 0) {
        return;
    }

    sum = num * QUARTS / HYDRONE_WEIGHT;

    printf("total is %e\n", sum);

    return;
}

void eara(void)
{
    float a, b, c;
    float s, area;

    printf("Please input:\n");
    scanf("%f%f%f", &a, &b, &c);

    /* 对输入参数进行有效性校验 */
    if ((a + b) <= c || (b + c) <= a || (a + c) <= b) {
        printf("input value invaild!\n");
        return;
    }

    //s = 1 / 2 * (a + b + c);  //不同类型数进行运算，整数整除1/2=0
    s = 1.0 / 2 * (a + b + c);
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    printf("area = %f\n", area);
}

int main()
{
    //water();
    eara();

    exit(0);
}
