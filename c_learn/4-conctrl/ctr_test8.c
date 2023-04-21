#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;
    int flag = 0;

    for (i = 2; i < 1000; i++) {
        flag = 0;
        /* 被除数不能为1，任何数都能被1整除,需要排除 */
        for (j = 2; j <= i; j++) {
            //printf("i = %d, j = %d, i%%j=%d\n", i, j, i%j);
            if ((i != j) && (i % j) == 0) { /* 能被本身以外的数整除则跳过 */
                //printf("%d not a zhishu\n", i);
                flag = 1;
                break;  /* 跳出本级循环，执行下一个数的判断 */
            }
        }
        if (!flag) {
            printf("%d ", i);
        }
    }
    printf("\n");

    exit(0);
}


