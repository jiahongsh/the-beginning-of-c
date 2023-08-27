#include<stdio.h>

int main() {
	int n = 0;
	int m = 0;
	scanf_s("%d %d", &n, &m);
	int arr1[1000] = { 0 };
	int arr2[1000] = { 0 };
	//输入
	int i = 0;
	for (i = 0; i < n; i++) {
		scanf_s("%d", &arr1[i]);
	}
	for (i = 0; i < m; i++) {
		scanf_s("%d", &arr2[i]);
	}
	//合并
	int arr3[2000] = { 0 };
	for (i = 0; i < n; i++) {
		arr3[i] = arr1[i];
	}
	int j = 0;
	for (; i < n + m; i++) {
		arr3[i] = arr2[j];
		j++;
	}
	//排序
	for (i = 0; i < n + m; i++) {
		//一次排序
		for (j = 0; j < m + n - i; j++) {
			if(arr3[j]<arr3[i]){
				int t;
				arr3[j] = t;
				arr3[i] = arr3[j];
				arr3[j] = t;

			}
		}
	}
	//输出
	for (i = 0; i < n + m; i++) {
		printf("%d ", arr3[i]);
	}
	return 0;
}