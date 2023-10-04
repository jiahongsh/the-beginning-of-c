#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#pragma pack(4)
struct s {
	int i;//0~3
	double j;//4~11
};
#pragma pack()
struct s1 {
	int i;）//0~3
	double j;//8~15
};
int main() {
	printf("%d\n", sizeof(struct s));
	printf("%d\n", sizeof(struct s1));
	return 0;
}