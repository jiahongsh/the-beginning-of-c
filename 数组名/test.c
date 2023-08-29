#include<Stdio.h>

int main() {

	int arr[10] = { 0 };
	printf("%d\n", arr);//首元素地址
	printf("%d\n", arr+1);//跳过一个int 四个字节
	printf("%d\n", &arr );//&arr代表整个数组的地址
	printf("%d\n", &arr + 1);//跳过整个数组
	printf("%d\n", &arr[0]);//首元素地址
	printf("%d\n", &arr[0]+1);//跳过四个字节
	return 0;
}