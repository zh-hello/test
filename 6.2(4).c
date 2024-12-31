#include <stdio.h>

int main()
{
    char str[81], substr[81];
    int k=0, n, loc, len;
    gets(str);
    scanf("%d%d", &loc, &len);
    if (loc<1 || loc>strlen(str) || len<=0)
    {
        substr[0]='\0';
    }
    else
    {
        for (n=loc-1; n<loc+len-1 && n<strlen(str); n++,k++)
            substr[k]=str[n];
        substr[k]='\0';
    }
    printf("Sub string is %s, its length is %d\n", substr, k);
    return 0;
}
