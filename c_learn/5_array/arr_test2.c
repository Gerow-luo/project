#include <stdio.h>
#include <stdlib.h>

/* 冒泡排序：
 * 相邻两个数作比较，比较一次，个数减一
 * */
static void bubble_sort()
{
    int arr[10] = {5, 7, 6, 8, 9, 2, 1, 4 , 8, 3};
    int i, j, tmp;

    for (i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
        for (j = 1; j < sizeof(arr)/sizeof(arr[0]) - i; j++) {
            if (arr[j] < arr[j - 1]) {
                tmp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = tmp;
            }
        }
    }

    for (i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

static void select_sort()
{
    int i, j, k;
    int tmp;
    int arr[10] = {5, 7, 6, 8, 9, 2, 1, 4 , 8, 3};
    int arr_num;

    arr_num = sizeof(arr)/sizeof(arr[0]);

#if 0
    for (i = 0; i < arr_num; i++) {
        for (j = i + 1; j < arr_num; j++) {
            if (arr[i] < arr[j]) {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
#endif

    for (i = 0; i < arr_num; i++) {
        k = i;
        for (j = i + 1; j < arr_num; j++) {
            if (arr[j] < arr[k]) {
                k = j;  //选出一个最小数的下标
            }
        }

        /* 说明第一个数不是最小（最大）的数，交换 */
        if (i != k) {
            tmp = arr[i];
            arr[i] = arr[k];
            arr[k] = tmp;
        }
    }

    for (i = 0; i < arr_num; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

}

int main()
{
    //(void)bubble_sort();

    (void)select_sort();

    exit(0);
}
