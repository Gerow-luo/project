#include <stdio.h>
#include <stdlib.h>

#define NAME_SIZE   128

struct simp_st
{
    char ch;
    float f;
    int i;
    int j;
}__attribute__((packed));
//__attribute__((packeted)):表示不对结构体进行内存对齐

struct birthday_st
{
    int year;
    int month;
    int day;
};

struct student_st
{
    int id;
    char name[NAME_SIZE];
    struct birthday_st birth;
    int math;
    int chinese;
};

void func(struct simp_st *p_sim)
{
    printf("%d\n", sizeof(b));
}

int main()
{
    struct simp_st sim;
    struct simp_st *p_sim = &sim;

#if 1
    //一般在函数传参时，不建议以结构体的形式作为参数传参，
    //因为函数参数大小即为结构体的大小，传参时会占用较大内存开销。
    //建议以结构体指针的方式传参。（指针的大小是固定的）

    //func(a); -->  func(sim.i, sim.j, sim.f, sim.ch);
    func(p_sim); --> func(&a);

#endif

#if 0
    struct simp_st stu;
    struct simp_st *p_stu = &stu;

    printf("sizeof(porint) = %d\n", sizeof(p_stu));
    printf("sizeof(struct) = %d\n", sizeof(stu));

#endif

#if 0
    struct student_st stu = {10011, "Alan", {2022, 11, 11}, 98, 97};

    struct student_st *p_stu = &stu;
    struct student_st stu_arr[2] = {{10011, "Alan", {2022, 11, 11}, 98, 97}, {10011, "Jero", {2022, 11, 11}, 98, 97}};

    //局部成员初始化
    //struct student_st stu = {.math = 98, .chinese = 97};

    printf("%d, %s, %d-%d-%d, %d %d\n", stu.id, stu.name, stu.birth.year,
            stu.birth.month, stu.birth.day,stu.math, stu.chinese);
    printf("%d, %s, %d-%d-%d, %d %d\n", p_stu->id, p_stu->name, p_stu->birth.year,
            p_stu->birth.month, p_stu->birth.day,p_stu->math, p_stu->chinese);

#endif

#if 0
    //TYPE NAME = VALUE;
    struct simp_st simp = {1, 2, 3.0, 'a'};

    simp.i = 100;
    simp.j = 200;
    simp.f = 2.333;
    simp.ch = 'A';

    printf("%d %d %f %c\n", simp.i, simp.j, simp.f, simp.ch);
#endif

    return 0;
}
