#include<stdio.h>

int main() {

	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
	int(*p)[10] = &arr;
	int sr = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < sr; i++) {
		printf("%d ", *(*p + i));//p是指向数组的，*p相当于数组名，数组名又是首元素的地址
	}
	printf("\n");
	return 0;


}