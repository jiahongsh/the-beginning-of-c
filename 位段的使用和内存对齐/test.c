#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	//冒号后是分配几个bit位
	struct s {
		int a : 2;
		int b : 5;
		int c : 10;
		int d : 30;
	};
	//共37个bit位，六个字节可放下
	printf("%d", sizeof(struct s));//内存对齐故需要8个bit位
	return 0;
}