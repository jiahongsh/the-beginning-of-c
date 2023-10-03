#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int arr[50] = { 0 };
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	//输入
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	//判断
	int flag1= 0;
	int flag2 = 0;
	for (i = 0; i < n; i++) {
		if (i > 0) {
          if (arr[i-1] <= arr[i]) {
			 flag1 = 1;
			
		    }
		  else {
			 flag2 = 1;
		   }
		}
		
	}



	if ((flag1 + flag2) == 1) {
		if (flag1 == 1) {
			printf("升序\n");
		}
		else if(flag2==1){
			printf("降序\n");
		}
		
	}
	else {
		printf("非有序\n");
	}
	return 0;
}