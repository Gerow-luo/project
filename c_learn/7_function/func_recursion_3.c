#include <stdio.h>
#include <stdlib.h>

void c(void)
{
    int i = 1;
    printf("[%s]begin!\n", __func__);
    printf("[%s] end!\n", __func__);

}
void b(void)
{
    printf("[%s]begin!\n", __func__);
    printf("[%s]call c()!\n", __func__);
    c();
    printf("[%s] c() returned!\n", __func__);
    printf("[%s] end!\n", __func__);

}

void a(void)
{
    printf("[%s]begin!\n", __func__);
    printf("[%s]call b()!\n", __func__);
    b();
    printf("[%s] b() returned!\n", __func__);
    printf("[%s] end!\n", __func__);

}

int main()
{

    printf("[%s]begin!\n", __func__);
    printf("[%s]call a()!\n", __func__);
    a();
    printf("[%s] a() returned!\n", __func__);
    printf("[%s] end!\n", __func__);
    

    return 0;
}
