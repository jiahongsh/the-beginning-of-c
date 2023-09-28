#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main() {
	char arr1[] = "abcdef";
	char arr2[] = "bcd";
char* ret=	strstr(arr1, arr2);
if (ret == NULL) {
	printf("ÕÒ²»µ½×Ö·û´®");
}
else {
	printf("%s", ret);
}
	return 0;
}