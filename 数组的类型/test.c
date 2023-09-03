#include<stdio.h>

int main() {

	int arr[10];//一维数组
	int* arr[10];//整形指针数组
	int(*p)[10];//类型为int 指向这个数组的指针   数组指针
	int(*p[10])[5];//数组有10个元素，每个元素为整形数组指针   存放数组指针的数组
	return 0;
}