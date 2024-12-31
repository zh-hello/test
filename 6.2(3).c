#include <stdio.h>

int main()
{
    char str1[81], str2[40];
    int i=0, j=0;
    gets(str1); gets(str2);
    while (str1[i]!='\0')
        i++;
    while (str2[j]!='\0')
    {
        str1[i]=str2[j];
        i++;
        j++;
    }
    str1[i]=str2[j];
    puts(str1);
    return 0;
}
