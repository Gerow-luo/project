#include <stdio.h>
#include <stdlib.h>

#define MAX_LINE    61
#define MAX_ROW     61

int main()
{
    int row, line;

    if ((MAX_LINE != MAX_ROW) || (MAX_LINE % 2 == 0) || (MAX_ROW % 2) == 0) {
        printf("ENIVAL\n");
        exit(0);
    }

    for (row = 1; row <= MAX_ROW / 2 + 1; row++) {
#if 0
        for(line = 1; line <= ((MAX_LINE / 2 - row) + 1); line++) {
            printf(" ");
        }
#else
        for(line = (MAX_LINE / 2) - row + 1; line > 0; line--) {
            printf(" ");
        }
#endif

        for(line = 1; line <= (2 * row - 1); line++) {
            printf("*");
        }
        printf("\n");
    }

    for (row = 1; row <= MAX_ROW / 2; row++) {
        for(line = 1; line <= row; line++) {
            printf(" ");
        }
        for(line = 1; line <= MAX_LINE - (row * 2); line++) {
            printf("*");
        }
        printf("\n");
    }

    exit(0);
}
