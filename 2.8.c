#include<stdio.h>
int main()
{
    int positiveCount=0,negativeCount=0,zeroCount=0;
    int positiveSum=0,negativeSum=0;
    int num,i;
    printf("请输入20个整数:\n");
    for(i=0;i<20;i++)
    {
        scanf("%d",&num);
        if(num>0)
        {
            positiveCount++;
            positiveSum+=num;
        }
        else if(num<0)
        {
            negativeCount++;
            negativeSum+=num;
        }
        else
        {
            zeroCount++;
        }
    }
    float positiveAverage=(float)positiveSum/positiveCount;
    float negativeAverage=(float)negativeSum/negativeCount;
    printf("正整数个数:%d,和:%d,平均值:%.2f\n",positiveCount,positiveSum,positiveAverage);
    printf("负整数个数:%d,和:%d,平均值:%.2f\n",negativeCount,negativeSum,negativeAverage);
    printf("0的个数:%d\n,zeroCount");
    return 0;
}
