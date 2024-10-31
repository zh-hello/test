#include <stdio.h>
int main()
{
    int prevNum, currNum;
    int index = 0;
    printf("输入数字序列:\n");
    while (scanf("%d", &currNum) == 1)
    {
        if (index>0)
        {
            printf("%d", currNum-prevNum);
        }
        prevNum = currNum;
        index++;
    }
    return 0;
}
