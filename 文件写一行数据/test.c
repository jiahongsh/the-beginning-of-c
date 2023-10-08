#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<errno.h>

int main() {
	FILE* pf = fopen("test.txt", "w"); //写文件
	//读一行数据
	fputs("hello world", pf);

	//关闭文件
	fclose(pf);
	pf = NULL;
	return 0;
}