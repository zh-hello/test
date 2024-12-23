#include<stdio.h>
	int main(void)
	{
	  /*********Begin*********/
	  int x,a,b,c;
      scanf("%d",&x);
	  a=x/100;
      b=(x-100*a)/10;
      c=x-100*a-10*b;
      printf("%d %d %d",a,b,c);
	  /*********End**********/
       return 0;
	}
