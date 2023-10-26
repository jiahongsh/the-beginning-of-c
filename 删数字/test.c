#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int forget = 0;
	int arr[10] = { 1,2,3,3,3,4,5,6,6,7 };
	int* src = arr;
	int* des = arr;
	scanf("%d", &forget);
	for (int i = 0; i < 10; i++) {
		if (arr[i != forget]) {
			*des = *src;
			des++;
		}
		src++;

	}
	
	return 0;
}