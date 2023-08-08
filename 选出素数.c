#include<stdio.h>
int main()
{
	int x,i,k;
scanf("%d",&k);
for(x=2;x<k;x++){
		int sum=1;
		int i;
		for(i=2;i<x;i++){
			if(x%i==0){
				sum=0; 
				break;
			}
		}
		if(sum==1){
			printf(" ");
			printf("%d",x);
	
		}
	}
	printf("\n");
	return 0;
}
