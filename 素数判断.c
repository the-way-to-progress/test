#include <stdio.h>
int main()
{
    int a;
    int i;
    printf("请输入一个数；");
    scanf("%d",&a);
    for (i = 2; i < a; ++i)
    {
        if(a%i==0)
            break;
    }
    if(i==a)
        printf("yes\n");
        else
            printf("no\n");
    return 0;
}