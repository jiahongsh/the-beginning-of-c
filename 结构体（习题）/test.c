#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
struct A {
	int a;//0~3
	short b;//4~5
	int c;//8~11
	char d;//12
};
struct B {
	int a;//0~3
	short b;//4~5
	char c;//6
	int d;//8~11
};
int main() {
	printf("%d\n", sizeof(struct A));//16
	printf("%d\n", sizeof(struct B));//12
	return 0;
}