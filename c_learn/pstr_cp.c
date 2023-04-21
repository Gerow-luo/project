#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *str = "hello";

    //strcpy(str, "world");  //不能通过其他方式修改常量的值
    str = "jimo";

    puts(str);

    exit(0);
}
