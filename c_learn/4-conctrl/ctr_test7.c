#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int ones, tens, hundreds;
    int sum;

    for (i = 0; i < 1000; i++) {
        //i = 153;
        ones = (i % 10);
        tens = ((i / 10) % 10);
        hundreds = (i / 100);
        sum = (ones * ones * ones) + (tens * tens * tens) + (hundreds * hundreds * hundreds);

        //printf("hundreds=%d, tens=%d, ones=%d\n", hundreds, tens, ones);
        //printf("sum = %d\n", sum);
        if (sum == i) {
            printf("%d ", i);
        }
    }
    printf("\n");

    exit(0);
}
