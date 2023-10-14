#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int x = 1;
	do {
		printf("%2d", x++);
	} while (x--);//产生死循环
	return 0;
}