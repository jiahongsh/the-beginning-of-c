#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//输入一个数组，将其旋转输出
//1 2 3  1 4
//4 5 6  2 5
//       3 6

int main() {
	int arr[10][10] = {0};
	int n = 0;
	int m = 0;
	scanf("%d %d", &n, &m);
	//输入
	int i = 0;
	int j = 0;
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	//输出
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			printf("%d ", arr[j][i]);
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}