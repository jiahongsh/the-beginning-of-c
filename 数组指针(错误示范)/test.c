#include<stdio.h>

int main() {

	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
	int(*p)[10] = &arr;
	int sr = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < sr; i++) {
		printf("%d ", *(*p + i));//p��ָ������ģ�*p�൱����������������������Ԫ�صĵ�ַ
	}
	printf("\n");
	return 0;


}