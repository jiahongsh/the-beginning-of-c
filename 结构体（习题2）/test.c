#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
struct A {
	short a;//0~1
	char b;//2
	long c;//4-7
	long d;//8-11
};

struct B {
	long a;//0~3
	short b;//4-5
	char c;//6
	long d;//8-11
};

struct C {
	short a;//0~2
	long b;//4-7
	char c;//8
	long d;//12-15
};
int main() {
	printf("%d\n", sizeof(struct A));//12
	printf("%d\n", sizeof(struct B));//12
	printf("%d\n", sizeof(struct C));//16
	return 0;

}