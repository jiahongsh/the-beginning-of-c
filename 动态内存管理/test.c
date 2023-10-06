#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
	int arr[5] = { 0 };
	int* p = (int*)malloc(20);//动态内存的开辟
	//赋值
	int i = 0;
	for (i = 0; i < 4; i++) {
		*(p + i) = i;
	}
	//输出
	for (i = 0; i < 4; i++) {
		printf("%d ", *(p + i));
	}
	return 0;
}