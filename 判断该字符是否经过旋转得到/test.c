#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
void left_move(char* arr1, char*arr2,int ret) {
	char temp = arr1[0];
	int i = 0;
	for (i = 0; i < ret - 1; i++) {
		arr1[i] = arr1[i + 1];
	}
	arr1[i] = temp;
	
	
      
}
int is_left_move(char* arr1, char* arr2) {
	int i = 0;
	int ret = strlen(arr1);
	for (i = 0; i < ret; i++) {
		left_move(arr1, arr2, ret);
		if (strcmp(arr1, arr2) == 0) {
			return 1;
		}
	}
	return 0;
}

int main() {
	char arr1[] = "abcdef";
	char arr2[] = "cdefab";
int n=	is_left_move(arr1,arr2);
if (n == 1) {
	printf("ok\n");
}
else {
	printf("no\n");
}
	return 0;
}