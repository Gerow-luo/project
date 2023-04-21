#include <stdio.h>
#include <stdlib.h>

#define MAX_CHAR_ACSLL    70
#define MIN_CHAR_ACSLL    65

int main()
{
    int i;
    int num;
    int min;

    min = MIN_CHAR_ACSLL;
    for (num = 6; num > 0; num--) {
        for (i = min; i <= MAX_CHAR_ACSLL; i++) {
            printf("%c", i);
        }
        min++;  /* 控制打印的个数 */
        printf("\n");
    }

    exit(0);
}
