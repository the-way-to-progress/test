#include <stdio.h>
int main()
{
    int m;
    int b;
    int sum=0;
    printf("请输入一个数：\n");
    scanf("%d", &b);
    m = b;
    while(m)
    {
        sum = sum * 10 + m % 10;
        m /= 10;
    }
    if (sum==b)
        printf("yes\n");
        else
        printf("no\n");
    return 0;
}