#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


/* 嵌套定义*/
struct 
{
    int a;
    int b;
    union un_a {
        int i;
        int j;
        float f;
        char c;
    };

};

union simp_un
{
    int i;
    int j;
    float f;
    char c;
};


union
{
    struct
    {
        uint16_t    i;
        uint16_t    j;
    }x;
    uint32_t    y;
} a;

int main()
{
    //高位与地位相加
    a.y = 0x11223344;
    printf("%x\n", a.x.i + a.x.j);

    exit(0);
}
