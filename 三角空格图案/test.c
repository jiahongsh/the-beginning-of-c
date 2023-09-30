#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int n = 0;
	printf("请输入三角形规格：");
	scanf("%d", &n);
	int i = 0;
	int arr[100][100] = { 0 };

	for (i = 0; i < n; i++) {//多行
		//一行
		int j = 0;
		for (j = 0; j < n - 1 - i; j++) {
			printf("  ");
		}
		for (j = n - 1 - i; j < n; j++) {
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}