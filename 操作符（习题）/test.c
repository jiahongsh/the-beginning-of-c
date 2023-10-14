#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int a = 21;        //00000001
	a ^= (1 << 5) - 1;// 00100000
	printf("%d\n", a); //00011111
	return 0;       //21 00010101
}            //按位与    00001010  等于10