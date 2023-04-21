#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row, line;

    line = 1;
    row  = 1;
    while(row <= 9) {
        printf("%d * %d = %d ", line, row, line * row);
        if (line == row) {
            line = 1;    /* 换行后需要重置列数 */
            row++;       /* 行数++ */
            printf("\n");
        } else {
            line++;     /* 列++,行不变 */
        }
    }

    exit(0);
}
