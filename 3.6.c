#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    printf("输入一个字符串:");
    scanf("%s",str);
    int len = strlen(str);
    char maxChar = str[0];
    for (int i=1; i<len; i++)
    {
        if (str[i]>maxChar)
        {
            maxChar=str[i];
        }
    }
    printf("ASCII码最大的字符是:%c\n", maxChar);
    return 0;
}
