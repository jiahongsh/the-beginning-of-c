#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#pragma pack(4)
struct s {
	int i;
	double j;
};
#pragma pack()
struct s1 {
	int i;
	double j;
};
int main() {
	printf("%d\n", sizeof(struct s));
	printf("%d\n", sizeof(struct s1));
	return 0;
}