#include<stdio.h>

int key() {
	int a = 1;
	//000000000000000000000000001源码
	// 0x 00 00  00 01 十六进制
	int* p = (char* )&a;
	return *p;
}
	int main() {

	int ret=key();
	if (ret == 1) {
		printf("小端\n");
	}
	else {
		printf("大端\n");
	}
	return 0;
}