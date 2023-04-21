#include <stdio.h>
#include <stdlib.h>

int fib(int n)
{
    if (n < 0) {
        return -1;
    }

    if (n == 1 || n == 2) {
        return 1;
    }

    return fib(n - 1) + fib(n - 2);
}

/*  散列
 *                                        fib(7)
 *                                fib(6)     +      fib(5)
 *      -->                    fib(5)+fib(4) + fib(4) + fib(3)
 *      --> fib(4)+fib(3) + fib(3)+fib(2) + fib(3)+fib(2) + fib(2)+fib(1)
 *      -->
 *
 * */

int main()
{
    int n, res;

    scanf("%d\n", &n);

    res = fib(n);

    printf("fib[%d] = %d\n", n, res);

    return 0;
}

