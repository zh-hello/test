#include<stdio.h>
	int main(void)
	{
	  /*********Begin*********/
	  float a,b,c,s,area;
      scanf("%f %f %f",&a,&b,&c);
      s=(a+b+c)/2;
      area=sqrt(s*(s-a)*(s-b)*(s-c));
      printf("%.3f",area);
	  /*********End**********/
       return 0;
	}
