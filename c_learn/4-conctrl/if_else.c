#include <stdio.h>
#include <stdlib.h>

int main()
{
/* 1.闰年的判断：能被4整除但是不能被100整除，或者能被400整除 */
    int year;

    scanf("%d",&year);
    if (year < 0) {
        fprintf(stderr, "Invaild year!\n");
    }

    if ((year % 4 == 0) && (year % 100 != 0) && (year % 400) == 0) {
        printf("%d is a leap year\n", year);
    } else {
        printf("%d is not a leap year\n", year);
    }


/* 2. 求成绩范围 */
#if 0 
    int score;

    printf("Enter score[0, 100]:\n");
    scanf("%d", &score);

    if (score > 100 || score < 0) {
        fprintf(stderr, "Invaild score!\n");
        exit(1);
    }

    if (score > 90)
        puts("A");
    else if (score > 80)
        puts("B");
    else if (score > 70)
        puts("C");
    else if (score > 60)
        puts("D");
    else
        puts("E");
#endif

#if 0
    if (score <=100 && score >= 90)
        puts("A");
    if (score < 90 && score >=80)
        puts("B");
    if (score < 80 && score >= 70)
        puts("C");
    if (score < 70 && score >= 60)
        puts("D");
    if (score < 60 && score >= 0)
        puts("E");

#endif

#if 0
    int a, b, c;

    a = 1, b = 1, c = 2;

    if (a == b) {
        printf("a == b\n");
        if (b == c) {
            printf("b == c\n");
        }
    } else {
        printf("a != b\n");
    }
#endif

#if 0
    int a, b, c;

    a = 9, b = 10;
    if (a++ < b) {
        printf("1\n");
    } else if (++a < b) {
        printf("0\n");
    } else {
        printf("no\n");
    }

    printf("a = %d, b = %d\n", a, b);
    printf("%d\n", (++b < a, ++a, b++));    //逗号表达式，取最后一个表达式的结果
    printf("a = %d, b = %d\n", a, b);
#endif

    exit(0);
}
