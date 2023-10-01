#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	unsigned int a = 0x1234;
	unsigned char b = *(unsigned char*)&a;
	printf("%x\n", b);///小端34，大端00
	return 0;
}