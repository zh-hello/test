#include <stdio.h>
int main()
{
    int num,i;
    int maxPositive=-1,minPositive=10000,maxNegative=-10000,minNegative=1;
    printf("请输入20个整数:\n");
    for(i=0;i<20;i++)
    {
        scanf("%d",&num);
        if(num>0)
        {
            if(num>maxPositive)
            {
                maxPositive=num;
            }
            if(num<minPositive)
            {
                minPositive=num;
            }

        }
        else if(num<0)
        {
            if(num<minNegative)
            {
                minNegative=num;
            }
            if(num>maxNegative)
            {
                maxNegative=num;
            }
        }
    }
    if(maxPositive==-1)
    {
        printf("没有正整数输入\n");
    }
    else
    {
        printf("最大正整数:%d\n",maxPositive);
        printf("最小正整数:%d\n",minPositive);
    }
    if(maxNegative==1)
    {
        printf("没有负整数输入\n");
    }
    else
    {
        printf("最大负整数:%d\n",maxNegative);
        printf("最小负整数:%d\n",minNegative);
    }
    return 0;
}

