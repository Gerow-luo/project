#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N   32
#define STR_SIZE    32

void char_simple(void)
{
    char arr1[N] = {'a', 'b', 'c'};
    char str[N];
    char str1[N], str2[N], str3[N];

    scanf("%s", str);   /* scanf %s不能获取带有分隔符的内容*/
    scanf("%s%s%s", str1, str2, str3);

    printf("%s\n%s\n%s\n", str1, str2, str3);
    //gets(str);  /* 谨慎使用 */
    puts(str);

}

void strlen_and_sizeof(void)
{
    char str[] = "hello";
    char str2[] = "hello\0abcd";

    /* strlen以'\0'作为结束标记，不识别字符串中的'\0' 
     * sizeof会识别字符串中的'\0'
     * */
    printf("strlen = %ld\n", strlen(str));
    printf("sizeof = %ld\n", sizeof(str));

    printf("strlen = %ld\n", strlen(str2));
    printf("sizeof = %ld\n", sizeof(str2));
}

void strcpy_and(void)
{
    char astr[] = "hello\0abc";

    //astr = "world"; //错误：赋值给数组类型的表达式(常量)

    //strcpy(astr, "world");    //将src拷贝到dest，以src中的'\0'作为结束标记，无法确定长度
    strncpy(astr, "world", sizeof(astr));

    puts(astr);
}

void strcat_and(void)
{
    char str[STR_SIZE] = "hello\0aaa";

    //strcat()函数：将src的内容覆盖dest末尾的'\0'，然后在增加后的字符串末尾加上'\0'
    strcat(str, " ");
    strcat(str, "world"); /* 不检查长度，需要确保dest参数有足够的空间 */

    //strncat(str, " ", STR_SIZE);
    //strncat(str, "world", STR_SIZE);
    
    printf("str = %s\n", str);

}

void strcmp_and(void)
{
    char str1[STR_SIZE] = "hello";
    char str2[STR_SIZE] = "world";

    //strcmp()函数通过比较两个字符串的ASCLL码来进行字符串的比较
    printf("%d\n", strcmp(str1, str2)); 

}

int main()
{

    //strlen_and_sizeof();
    //strcpy_and();
    //strcat_and();
    //strcmp_and();


    exit(0);
}
