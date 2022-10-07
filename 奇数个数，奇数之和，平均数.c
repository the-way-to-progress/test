#include <stdio.h>
int main()
{
    int i;
    int sum = 0;
    int cnt = 0;
    float avg;
    for (i = 1; i <= 100;++i)
    if(i%2==1)
    {
        sum += i;
        cnt += 1;
    }
    avg = sum / cnt;
    printf("sum=%d\n",sum);
    printf("cnt=%d\n", cnt);
    printf("avg=%f\n", avg);
    return 0;
}