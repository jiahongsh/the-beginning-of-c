#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<string.h>
int main() {
	int arr[5] = { 0 };
	int* p = (int*)calloc(10,sizeof(arr[0]));//该方式声情内存会初始化所有数据为0
	if (p == NULL) {
		printf("%s\n", strerror(errno));
	}
	int i = 0;
	for (i = 0; i < 10; i++) {
		printf("%d ", *(p + i));
	}
	return 0;
}