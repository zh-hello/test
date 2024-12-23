#include<stdio.h>
	int main(void)
	{
	  /*********Begin*********/
	  int a,b,c;
      printf("请输入三个整数:");
	  scanf("%d%d%d",&a,&b,&c);
      if(a<b&&a<c&&b<c)
      printf("从小到大排列为:%d,%d,%d",a,b,c);
      else if(a<b&&a<c&&c<b)
      printf("从小到大排列为:%d,%d,%d",a,c,b);
      else if(b<a&&b<c&&c<a)
      printf("从小到大排列为:%d,%d,%d",b,c,a);
      else if(b<a&&b<c&&a<c)
      printf("从小到大排列为:%d,%d,%d",b,a,c);
      else if(c<a&&c<b&&a<b)
      printf("从小到大排列为:%d,%d,%d",c,a,b);
      else
      printf("从小到大排列为:%d,%d,%d",c,b,a);
	  /*********End**********/
       return 0;
	}
