#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int arr[10][10] = { 0 };
	int i = 0;
	int j = 0;
	int n = 0;
	int flag = 1;
	scanf("%d", &n);
	//输入
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			scanf("%d", &arr[i][j]);
		}
	
	}
	//输出
	for (i = 0; i < n; i++) {
		/*for (j = 0; j < i; j++) {
			if (arr[i][i] != 0) {
				flag == 0; 
				}*/
		for (j = 0; j < n; j++) {
			if (i > j) {
				if (arr[i][j] != 0) {
					flag = 0;
				}
			}
		  }
		}

	//判定
	if (flag ==1) {
		printf("yes\n");
	}
	else if (flag == 0) {
		printf("no\n");
	}
	return 0;
}