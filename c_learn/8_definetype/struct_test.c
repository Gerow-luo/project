#include <stdio.h>
#include <stdlib.h>

#define NAME_SIZE   128

struct student_st
{
    int id;
    char name[NAME_SIZE];
    int math;
    int chinese;
};

void stu_set(struct student_st *p_stu)
{
    p_stu->id = 100011;
    strncpy(p_stu->name, "Alan", NAME_SIZE);
    p_stu->math = 100;
    p_stu->chinese = 98;
}

void stu_show(struct student_st *p_stu)
{
    if (p_stu == NULL) {
        return -1;
    }

    printf("id: %d\n", p_stu->id);
    printf("name: %s\n", p_stu->name);
    printf("math: %d\n", p_stu->math);
    printf("chinese: %d\n", p_stu->chinese);
}


int main()
{
    struct student_st stu;

    stu_set();

    stu_show();

    exit(0);
}
