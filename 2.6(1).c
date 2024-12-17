#include <stdio.h>
int main()
{
    int sum=0;
    int num;
    for(num=1;num<=1000;num++)
    {
        if(num%3==0)
        {
            sum+=num;
        }
    }
    printf("1000以内3的倍数之和为:%d\n",sum);
    return 0;
}
