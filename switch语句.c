#include <stdio.h>
int main()
/*
犯错的地方，case 1写成了case1
*/
{
    int a;
    printf("请输入你想要到的层数：\n");
    scanf("%d",&a);
    switch(a)
    {
    case 1:
        printf("1层到了\n");
        break;
    case 2:
        printf("2层到了\n");
        break;
    case 3:
        printf("3层到了\n");
        break;
    case 4:
        printf("4层到了\n");
        break;
    default:
        printf("还未盖到这一层");
    }
    return 0;
}