#include <stdio.h>
#define N 7
#define L (80-N)/2

int main()
{
   char c='A';
   int i, j, p;
   for (i=1; i<=N; i++,c++)
   {
       if (i<=(N+1)/2) p=i;
       else p=N-i+1;
       for (j=1; j<=L-p; j++)
        printf(" ");
       for (j=1; j<=2*p-1; j++)
        printf("%c", c);
       printf("\n");
   }
   return 0;
}
