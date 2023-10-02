#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//输入一个字符串，使所有字符串左移动一个
void left_move(char* arr1, int ret) {
	char temp = arr1[0];
	int i = 0;
	for (i = 0; i < ret - 1; i++) {
		arr1[i] = arr1[i + 1];
	}
	arr1[i] = temp;
}

int main() {
	char arr1[] = "abcedf";
	int k = 0;
	scanf("%d", &k);
	int i = 0;
	int ret = strlen(arr1);
	for (i = 0; i < k; i++) {
	
		left_move(arr1, ret);
		
	}
	printf("%s\n", arr1);
	return 0;
}