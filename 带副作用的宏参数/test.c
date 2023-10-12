#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define MAX(x,y) ((x)>(y))?(x):(y)
int main() {
	int a = 5;
	int b = 4;
	int m = MAX(a++, b++);
	//a为较大值（a++）>(b++)后置++，m等于未++前的较大者a值为5
	//宏的作用会替换，确定为a后a++又执行了一次，b++没有，a=7.b=5
	printf("m=%d a=%d b=%d", m, a, b);
	return 0;
}