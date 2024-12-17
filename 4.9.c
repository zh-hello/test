#include <stdio.h>
int main()
{
    int m, n, x, y;
    printf("输入两位数:");
    scanf("%d", &m);
    x=m/10;
    y=m%10;
    n=y*10+x;
    printf("%d\n", n);
    return 0;
}


