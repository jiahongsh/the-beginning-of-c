#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
 #pragma pack(4)
struct A {
	double a;//0-7   0-7
	char b;//8         8
	int c;//12-15    12-15

};

struct B {
	char a;//0       0
	double b;//8-15   4-11
	int c;//16-19     12-15
};

int main() {
	printf("%d ", sizeof(struct A));//16(8)   16(4)
	printf("%d\n", sizeof(struct B));//24(8)  16(4)
	return 0;
}