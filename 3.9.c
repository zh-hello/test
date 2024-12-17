#include <stdio.h>
int main()
{
    FILE*fp;
    char ch;
    fp = fopen("scores.txt","r");
    if (fp==NULL)
    {
        printf("无法打开文件\n");
        return 1;
    }
    while ((ch=fgetc(fp))!=EOF)
    {
        putchar(ch);
    }
    fclose(fp);
    return 0;
}

