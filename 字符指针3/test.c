#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	char arr1[] = "abcdef";
	char arr2[] = "abcdef";
	char* str1 = "abcdef";
	char* str2 = "abcdef";
	if (arr1 == arr2) {
		printf("==\n");
	}
	else {
		printf("!=\n");
	}
	if (str1 == str2) {
		printf("==\n");
	}
	else{
		printf("!=\n");
	}
	
	return 0;
}

