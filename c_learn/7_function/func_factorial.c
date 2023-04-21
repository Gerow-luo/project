#include <stdio.h>
#include <stdlib.h>

//求阶乘
//n! = (n - 1)!
//

int func(int n)
{
    if (n < 0) {
        return -1;
    }

    //结束条件
    if (n == 0 || n == 1) {
        return 1;
    }

    //调用自身
    return n * func(n - 1);
}

int main()
{
    int n;
    int res;
    scanf("%d", &n);

    res = func(n);
    printf("%d\n", res);

}

