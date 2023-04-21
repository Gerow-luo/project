#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i, j, k;
    char *tmp;

    /* 指针数组 */
    char *name[5] = {"Floow me", "Basic", "Great", "Fortran", "Computer"};

    for (i = 0; i < 5 - 1; i++) {
        k = i;
        for (j = i + 1; j < 5; j++) {
            if (strcmp(name[k], name[j]) > 0) {
                k = j;
            }
        }
        if (k != i) {
            tmp = name[i];
            name[i] = name[k];
            name[k] = tmp;
        }
    }

    for (i = 0; i < 5; i++)
        printf("%s\n", name[i]);



    exit(0);
}
