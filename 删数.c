#include<stdio.h>

int main() {
	int arr[9] = { 1,2,3,4,5,4,3,2,1};
	int i = 0;
	int j = 0;
	int k = 0;
	int m = 0;
	int del = 0;
	for (k = 0; k <9; k++) {
		printf("%d", arr[k]);
	}
	printf("\n");
	printf("请输入要删除的数字");
	scanf_s("%d", &del);
	
	for (i = 0; i < 9; i++) {
		if (arr[i] != del) {
			arr[j++] = arr[i];
			
		}
	}
	for (m = 0; m <j; m++) {
		printf("%d", arr[m]);
	}
	return 0;
}