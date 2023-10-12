#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define PRINTF(N,X) num##106//##能使两个字符串合并成为一个字符串
int main() {
	int num106 = 100;
	printf("%d", PRINTF(num,106));
	return 0;
}