//有一头母牛，它每年年初生一头小母牛。
//每头小母牛从第四个年头开始，每年年初也生一头小母牛。
//请编程实现在第n年的时候，共有多少头母牛？

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int fib(int n) {
	if (n <= 3) {
		return n;
	}
	return fib(n - 1) + fib(n - 3);
}
int main() {
	int n = 0;
	scanf("%d", &n);
	int sum = fib(n);
	
	printf("%d", sum);
	return 0;
}