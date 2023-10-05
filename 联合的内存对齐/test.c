#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	union un {
		char arr[5];//对齐数为1
		int i;//对齐数为4
	};
	//根据内存对齐原则，所占字节数为4的倍数
	printf("%d\n", sizeof(union un));

	return 0;
}