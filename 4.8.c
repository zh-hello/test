#include <stdio.h>
int main()
{
    int i, a, b;
    printf("输入天数:");
    scanf("%d", &i);
    a=i/7;
    b=i%7;
    printf("%d周%d天\n", a,b);
    return 0;
}


