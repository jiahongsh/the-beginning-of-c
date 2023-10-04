#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stddef.h>
int main() {
	struct s1 {
		char x;
		char y;
		int i;
	};

	struct s2{
		char x;
		int i;
		char y;
	}s2;

	printf("%d\n",sizeof(struct s1));
	printf("%d\n", sizeof(struct s2));
	return 0;
}