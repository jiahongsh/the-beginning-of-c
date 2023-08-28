#include<stdio.h>

int main() {
	const char* p1 = "abcdef";
	const char* p2 = "abcdef";
	char arr1[] = "abcdef";
	char arr2[] = "abcdef";
	if (p1 == p2) {
		printf("p1==p2\n");
	}
	else {
		printf("p1!=p2\n");//字符指针目标为字符串时为首元素的地址，不可修改，只可被调用，所以只需存在一个abcdef  p1，p2指向的是同一个字符串 地址相同
	}

	if (arr1 == arr2) {
		printf("arr1==arr2\n");//数组是开辟了一个新空间，数组名是首元素地址，空间不同，地址不同

	}
	else {
		printf("arr1!=arr2\n");
	}
	return 0;
}