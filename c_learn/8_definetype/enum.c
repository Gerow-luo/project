#include <stdio.h>
#include <stdlib.h>

enum date
{
    MON,
    TUS,
    THR,
    WES,
    FRI,
    SAT,
    SUN
};

enum 
{
    STATE_RUNNING = 1,
    STATE_CANCELED,
    STATE_OVER
};

struct job_st
{
    int id;
    int state;
    time_t start, end;
};

int main()
{
    struct job_st   job1;

    /* 获取任务状态 */
    switch(job1.state)
    {
        case STATE_RUNNING:
            break;
        case STATE_CANCELED:
            break;
        case STATE_OVER:
            break;
        default:
            abort();

    }

    enum date a = MON;
    printf("%d\n", a);

    exit(0);
}
