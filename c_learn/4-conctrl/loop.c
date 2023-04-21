#include <stdio.h>
#include <stdlib.h>

#define LEFT    1
#define RIGHT   100

int main()
{
    int i, sum;
    int start, end;

    sum = 0;
    start = 0;
    end = 10;

    while (start <= end) {
        sum += start;
        start++;
    }

    printf("strat = %d, sum = %d\n", start, sum);

    sum = 0;
    start = 0;
    end = 10;
    do {
        sum += start;
        start++;
    } while(start <= end);

    printf("strat = %d, sum = %d\n", start, sum);

//while()
#if 0
    i = LEFT;
    while(i <= RIGHT) {
        sum += i;
        i++;
    }
#endif

//do while
#if 0
    i = LEFT;
    do {
        sum += i;
        i++;
    } while(i <= RIGHT);
#endif

    printf("sum = %d\n", sum);

    exit(0);
}
