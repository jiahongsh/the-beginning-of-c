#include<stdio.h>

int main() {
	int a = 0;
	int b ;
	int c;
	int d;
	scanf_s("%d", &a);
	b = a;
	a >>= 1;//����2
	b <<= 1;//��2
	c = (a >> 1) + (a >> 3);//����10 ����δ��Ҫ��
	d = (a << 1) + (a << 3);//��10

	printf("%d %d %d %d\n", a,b,c,d);
	return 0;
}