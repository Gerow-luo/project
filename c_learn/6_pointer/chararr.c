#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *str = "hello";

    printf("%d, %d\n", sizeof(str), strlen(str));
    //F strcpy(str, "world");  //错误操作，企图用"world"字符串去覆盖指针指向的串常量
    str = "world";  //正确操作，修改指针变量指向的内容
    printf("%s\n", str);

#if 0
    char str[] = "hello";

    printf("%d, %d\n", sizeof(str), strlen(str));
    //F str = "world";  //错误操作，修改地址常量的值
    strcpy(str, "wolrd");   //正确，将字符串替换str地址空间中的值

    printf("%s\n", str);
#endif

    exit(0);
}

