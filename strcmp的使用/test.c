#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	char arr1[20] = "zhangsant";
	char arr2[20] = "zhangsan";
		int ret = strcmp(arr1, arr2);
	if (ret < 0) {
		printf("<\n");
	}
	else if(ret == 0) {
		printf("==\n");
	}
else {
	printf(">\n");
	}
	return 0;
}