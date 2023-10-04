#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stddef.h>

int main() {
	struct s1 {
		double d;
		char c;
		int i;
	};
	struct s2{
		char c1;
		struct s1 str;//对齐数默认为该结构体中的对齐数
		double d;
	};//内存储存后的整体大小为所有对齐数中最大对齐数的整数倍

	printf("%d\n", sizeof(struct s2));
	return 0;
}