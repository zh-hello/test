#include <stdio.h>
#define N 3

int main()
{
    int i, j, t, a[N+1];
    for (i=1; i<=N; i++)
        scanf("%d", &a[i]);
    for (i=2; i<=N; i++)
    {
        for (j=i; j>1; j--)
        {
            if (a[j]>=a[j-1])
            {
                break;
            }
            else
            {
                t=a[j]; a[j]=a[j-1]; a[j-1]=t;
            }
        }

    }
    i=1;
    while (i<=N)
        printf("%d, ",a[i++]);
    printf("\n");
    return 0;
}
