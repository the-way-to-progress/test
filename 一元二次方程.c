#include <stdio.h>
#include <math.h>
int main()
/*
犯的错误printf("a",b);前后之间要有逗号
每个语句后面要有;
scanf语句使用要有&
*/
{
    double a, b, c;
    double x1, x2;
    double delta;
    printf("请输入三个系数\n");
    printf("a=");
    scanf("%lf", &a);
    printf("b=");
    scanf("%lf", &b);
    printf("c=");
    scanf("%lf", &c);
    delta = b * b - 4 * a * c;
    if (delta>0)
    {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("x1=%lf,x2=%lf\n" ,x1, x2);
    }
    else if(0==delta)
    {
        x1 = x2 = (-b)/(2*a);
        printf("x1=x2=%lf\n" ,x1, x2);
    }
    else
    {
        printf("无实数解！");
    }
    return 0;
}