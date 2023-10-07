#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
struct s {
	int i;
	int arr[];//柔性数组在计算结构体内存时不计入
};
int main() {
	printf("%d\n", sizeof(struct s));//4
	return 0;
}