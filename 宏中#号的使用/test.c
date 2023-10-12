#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define PRINT(N) printf("the value "#N" is %d\n",N)//当在N前加一个#时N会替换成N所代表的字符串，及（a）
int main() {
	int a = 10;
	PRINT(a);
	return 0;
}
