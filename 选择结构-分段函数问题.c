#include<stdio.h>
	int main(void)
	{
	  /*********Begin*********/
	  double x,y;
      scanf("%lf",&x);
      if(x<0&&x!=-3)
      {y=x*x+x-6;
	  printf("%.3lf",y);}
      else if(x>=0&&x<10&&x!=2&&x!=3)
      {y=x*x-5*x+6;
      printf("%.3lf",y);}
      else
      {y=x*x-x-1;
      printf("%.3lf",y);}
	  /*********End**********/
       return 0;
	}

