#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<string.h>
int main() {
	int*p=(int*)malloc(40);
	/*if (p == NULL) {
		printf("%s\n", strerror(errno));  
		return 1;
	}*/
	*p = 10;//p可能是空指针需要判断一下
	free(p);
	p = NULL;
		return 0; 
}