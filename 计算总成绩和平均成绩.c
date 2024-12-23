#include<stdio.h>
	int main(void)
	{
	  /*********Begin*********/
	  int num,i,sum=0;
      float average;
      for(i=0;i<5;i++)
      {
          scanf("%d",&num);
          sum+=num;
      }
      average=(float)sum/5;
      printf("%d %.2f",sum,average);
	  /*********End**********/
       return 0;
	}
