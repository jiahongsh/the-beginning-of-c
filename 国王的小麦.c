#include<stdio.h>
int main()
{
	double count,zong,i;
      count=1,zong=0;
	 for(i=1;i<=64;i++)
	  {
	  	zong+=count;
	    count=count*2;
	    
	    
	    printf("i=%.0ljf,zong=%.0lf\n",i,zong);
}
return 0;
}

