#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main() {
	int arr1[] = {1,2,3,4,5,6,7,8,9,10};
	memmove(arr1 + 2, arr1, 20);
	int i = 0;
	for (i = 0; i < 10; i++) {
		printf("%d ", arr1[i]);
	}
	return 0;
}