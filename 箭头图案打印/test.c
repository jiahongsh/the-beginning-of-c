#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int i = 0;
	int j = 0;          
	int n = 0;
	printf("请输入箭头大小：");
	scanf("%d", &n);
	//上半
	for (i = 0; i <n ; i++) {
		//空格打印
		for (j = 0; j <n-i+1 ; j++) {
			printf("  ");
		}
		//*号打印
		for (j = 0; j <i+1 ; j++) {
			printf("*");
		}
		printf("\n");
	}
	//下半
	for (i = 0; i <n+1 ; i++) {
		//空格打印
		for (j = 0; j <=i ; j++) {
			printf("  ");
		}
		//*号打印
			for (j = 0; j <n+1-i ; j++) {
				printf("*");
			}
			printf("\n");
	}
	return 0;
}
//0000*
//00**
//***
//00**
//0000*