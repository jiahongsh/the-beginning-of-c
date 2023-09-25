#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int arr[2][5] = { 11,2,3,4,5,6,7,8,9,10 };
	int* prt1 = (int*)(&arr + 1);
	int* prt2 = (int*)(arr + 1);
	printf("%d\n%d\n" ,*(prt1 - 1), *(prt2 - 1));
	return 0;
}