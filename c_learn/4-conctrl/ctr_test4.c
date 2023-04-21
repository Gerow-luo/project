#include <stdio.h>
#include <stdlib.h>

#define PRINT_NUM   40

int main()
{
    int i;
    int num, tmp_num, bef_num;

    num = 1;
    bef_num = 1;
    for (i = 1; i <= PRINT_NUM; i++) {
        if (i <= 2) {
            printf("1,");
            continue;
        }
        tmp_num = num;
        num += bef_num;
        bef_num = tmp_num;
        printf("%d", num);
        printf(",");
    }

    printf("\n");
    printf("i = %d\n", i);
    exit(0);
}
