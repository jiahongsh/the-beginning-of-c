#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int f(int x) {
	return (x > 2) ?( x * f(x - 1)) : 3;
}
int main() {
	int i = 0;
	i = f(f(2));
	printf("%d\n", i);
	return 0;
}
