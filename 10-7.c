#include <stdio.h>
int main()
{
    int a;
    int b;
    int sum=0;
    printf("请输入一个数：\n");
    scanf("%d", &b);
    a = b;
    while(a)
    {
        sum = sum * 10 + a % 10;
        a /= 10;
    }
    if (sum==b)
        printf("yes\n");
        else
        printf("no\n");
    return 0;
}