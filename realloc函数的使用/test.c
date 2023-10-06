#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<errno.h>
int main() {
	int* p = (int*)malloc(40);
	int i = 0;
	for (i = 0; i < 10; i++) {
		*(p + i) = i;
	}
	if (p == NULL) {
		printf("%s\n", strerror(errno));
	}
	//在后追加40个字节的空间
	int* ptr = realloc(p, 40);
	if (ptr != NULL) {
		p = ptr;
	}

	//输出
	for (i = 0; i < 10; i++) {
		printf("%d ", *(p + i));
	}
	return 0;
}