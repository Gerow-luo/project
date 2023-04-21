#include <stdio.h>
#include <stdlib.h>

int main()
{
    int even_sum, odd_sum;
    int even_num, odd_num;
    int ret,in_num;

    even_sum = 0;
    odd_sum = 0;
    even_num = 0;
    odd_num = 0;
    printf("Please enter intteger number, end of zero:\n");

    while(1) {
        ret = scanf("%d", &in_num);
        if (ret != 1 || in_num < 0) {
            fprintf(stderr, "EINVAL\n");
            break;
        }

        if (in_num == 0) {
            printf("End of input, the result is as follows:\n");
            /* 平均数强转成float结果会更精确，因为不一定都能整除 */
            printf("number of even = %d, average value =%f \n", even_num, (float)even_sum / even_num);
            printf("number  of odd = %d, average value =%f \n", odd_num, (float)odd_sum / even_num);
            break;
        }

        if ((in_num % 2) == 0) {
            even_sum += in_num;
            even_num++;
        } else {
            odd_sum += in_num;
            odd_num++;
        }
    }

    exit(0);
}
