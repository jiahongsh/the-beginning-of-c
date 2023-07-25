#include<stdio.h>
void  print(int*p,int sr ) {
	int i = 0;
	for (i = 0; i < sr; i++) {
		printf("%d", *(p + i));
	}
	printf("\n");
}
int main() {
	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
	int sr = sizeof(arr) / sizeof(arr[0]);
	print(arr, sr);
	return 0;
}