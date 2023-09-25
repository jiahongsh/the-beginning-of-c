#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	char* arr[] = { "work","at","ailibaba"};
	char** pa = arr;
	pa++;
	printf("%s\n", *pa);
	return 0;
}