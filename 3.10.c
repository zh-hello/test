#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    printf("输入字符串:");
    scanf("%s", str);
    FILE*fp;
    fp=fopen("output.txt", "w");
    if (fp==NULL)
    {
        printf("无法打开文件。\n");
        return 1;
    }
    int len=strlen(str);
    for (int i=0; i<len; i++)
    {
        fprintf(fp, "%c\n", str[i]);
    }
    fclose(fp);
    return 0;
}
