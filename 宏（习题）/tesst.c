#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define A 2+2
#define B 3+3
#define C A*B
int main() {
	printf("%d\n", C);//预编译后 2+2*3+3，先算乘，后算加 C=11
	return 0;
}