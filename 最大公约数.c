#include<stdio.h>
int main()
{
	int a,b,min;
	scanf("%d %d",&a,&b);
	 if(a>b)
	 min=b;
	 if(a<=b)
	 min=a;
int ret,i;
  for(i=2;i<min;i++){
   if(a%i==0){
     if(b%i==0)
           ret=i;}
  }
  printf("%d��%d�����Լ��Ϊ%d\n",a,b,ret);
    return 0;	
}
