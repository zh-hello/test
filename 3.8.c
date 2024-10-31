#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    printf("输入:");
    scanf("%s", str);
    if (strlen(str)==0)
    {
        printf("空串\n");
    }
    else
    {
        printf("%s\n", str);
    }
    return 0;
}
