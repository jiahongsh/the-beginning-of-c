#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main() {
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[] = { 1,2,3};
	int ret = memcmp(arr1, arr2, 12);
	if (ret < 0) {
		printf("arr1<arr2\n");
	}
	else if(ret==0){
		printf("arr1==arr2\n");
	}
	else {
		printf("arr1>arr2\n");
	}
	return 0;
}