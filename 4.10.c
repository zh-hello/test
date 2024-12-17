#include <stdio.h>
int main()
{
    long long num;
    printf("输入:");
    scanf("%lld", &num);
    long long r=0;
    while (num!=0)
    {
        r=r*10+num%10;
        num/=10;
    }
    printf("%lld\n", r);
    return 0;
}

