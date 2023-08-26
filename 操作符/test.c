#include<stdio.h>

int main() {
	int a = 0;
	int b ;
	int c;
	int d;
	scanf_s("%d", &a);
	b = a;
	a >>= 1;//除以2
	b <<= 1;//乘2
	c = (a >> 1) + (a >> 3);//除以10 程序未到要求
	d = (a << 1) + (a << 3);//乘10

	printf("%d %d %d %d\n", a,b,c,d);
	return 0;
}