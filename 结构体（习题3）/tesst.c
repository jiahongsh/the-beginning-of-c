#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
struct a {
	int a;//0-3
	char b;//4
	short c;//6-7
	short d;//8-9

};
int main() {
	printf("%d\n", sizeof(struct a));//12
	return 0;
}