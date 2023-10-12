#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stddef.h>
struct S{
	char c1;
	int i;
	char c2;
};
#define OFFSETOF(type,name) (size_t)&(((type*)0)->name)//将起始地址设为0，偏移量是多少，地址就是多少
int main() {
	struct S s = { 0 };
	printf("%d ", offsetof(struct S, c1));
	printf("%d ", offsetof(struct S,i));
	printf("%d\n", offsetof(struct S, c2));
	printf("%d ", OFFSETOF(struct S, c1));
	printf("%d ", OFFSETOF(struct S, i));
	printf("%d\n", OFFSETOF(struct S, c2));
	return 0;
}