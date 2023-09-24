#include<stdio.h>

int main() {
	int a[3][2] = { (0,1),(2,3),(4,5) };
	int* p;
	p = a[0];
	int arr[3][2] = { 1,2,3,4,5,6 };
	printf("%d", p[0]);
	return 0;
}