#include <stdio.h>
void max(int i, int j) 
{if (i > j)
    printf("max=%d\n",i);
else 
    printf("max=%d\n",j);
    }
int main()
{
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    int g;
    a = 2, b = 4, c = 1, d = 5, e = 8, f = 9, g = 7;
    max(a, b);
    max(c, d);
    max(e, f);
    max(e, g);
    return 0;
}

