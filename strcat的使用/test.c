#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	char arr[20] = "hello ";
	strcat(arr, "world");
	printf("%s\n", arr);
	return 0;
}