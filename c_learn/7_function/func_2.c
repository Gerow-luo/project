#include <stdio.h>
#include <stdlib.h>

int min(int a, int b, int c)
{
    int tmp;

    tmp = a < b ? a : b;
    tmp = tmp < c ? tmp : c;

    return tmp;
}

int max(int a, int b, int c)
{
    int tmp;

    tmp = a > b ? a : b;
    tmp = tmp > c ? tmp : c;

    return tmp;
}

int get_dist(int a, int b,int c)
{
    return max(a, b, c) - min(a, b, c);
}

int main()
{
    int a = 3, b = 5, c = 10;
    int num;

    num = get_dist(a, b, c);

    printf("%d\n", num);

    return 0;
}
