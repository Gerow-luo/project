#include <stdio.h>
#include <stdlib.h>

#define MAX_ARR_NUM 128

int main()
{
    int i, num, base;
    int arr[MAX_ARR_NUM];

    printf("Please enter the converted num:");
    scanf("%d", &num);
    printf("Please enter the base:");
    scanf("%d", &base);

    do {
        arr[i] = num % base;
        num = num / base;
        i++;
    } while(num != 0);

    for (i--; i >= 0; i--) {
        if(arr[i] >= 10)
            printf("%c", arr[i] - 10 + 'A');
        else
            printf("%d", arr[i]);
    }
    printf("\n");

    exit(0);
}
