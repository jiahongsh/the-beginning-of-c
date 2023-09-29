#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main() {
	char arr1[] = "jiahongsheng@3378079760.com";
	char p[] = "@";
	char* ret=strtok(arr1, p);
	printf("%s\n", ret);
	ret = strtok(NULL, p);
	printf("%s\n", ret);
	ret = strtok(NULL, p);
	printf("%s\n", ret);
	return 0;
}
