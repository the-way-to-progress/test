#include <stdio.h>
int main()
{
    int a[3][4] = {
        {1, 2, 3},
        {4456, 345, 13},
        {123, 234, 234}};
    int i,j;
    for (i = 0; i < 3; ++i)
    {
        for (j = 0; j < 4;++j)
            printf("%-5d  ",a[i][j]);
        printf("\n");
    }
    return 0;
}