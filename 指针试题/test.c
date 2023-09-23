#include<stdio.h>

int main() {
	int arr[] = { 0,1,2,3,4,5 };
	int* prt = (int*)(&arr + 1);
	printf("%d\n %d\n", *(arr + 1), *(prt - 1));
	return 0;
}