#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<errno.h>

int main() {
	FILE* pf = fopen("test.txt", "r"); //写文件
	//读一行数据
	char arr[20];
	fgets(arr, 5, pf);

	//关闭文件
	fclose(pf);
	pf = NULL;
	return 0;
}