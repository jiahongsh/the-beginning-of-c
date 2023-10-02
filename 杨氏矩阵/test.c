#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
	int i = 0;
	int j = 2;
	int n = 0;
	int flag = 0;
	scanf("%d", &n);
	while (j >= 0 && i <= 2) {
              if (n < arr[i][j]) {
		          j--;
	          }
	          else if (n > arr[i][j]) {
		          i++;
	           }
	           else {
				  flag = 1;
				  break;
	             }
	        }
	
	if (flag == 1) {
		printf("存在这个数");
		printf("位于%d，%d",i+1,j+1);
	}
	else {
		printf("不存在这个数");

	}
	return 0;
}