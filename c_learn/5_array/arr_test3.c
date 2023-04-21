#include <stdio.h>
#include <stdlib.h>

#define ARR_NUM 1001

int main()
{
    int i, j;
    int arr[ARR_NUM] = {0};

    for (i = 2; i < ARR_NUM; i++) {
        if (arr[i] == 0) {
            for (j = i * 2; j < ARR_NUM; j+=i) {
                arr[j] = -1;
            }
        }
    }

    for (i = 2; i < ARR_NUM; i++) {
        if (arr[i] == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    exit(0);
}
