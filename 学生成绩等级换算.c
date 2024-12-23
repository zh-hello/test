#include<stdio.h>
	int main(void)
	{
	  /*********Begin*********/
	  float score;
	  scanf("%f",&score);
      if(score>=0&&score<=100)
      {
       if(score>=90)
         printf("A");
       else if(score>=80)
         printf("B");
       else if(score>=70)
         printf("C");
       else if(score>=60)
         printf("D");
       else
         printf("E");
      }
      else
        printf("Score is error!");
	  /*********End**********/
       return 0;
	}

