#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void test() {
	char* str = (char*)malloc(100);
	strcpy(str, "hello");
	free(str);//str已释放，地址指向还存在，但内存不存在，str为野指针
	if (str != NULL) {
		strcpy(str, "world");
		printf(str);
	}
}
int main() {
	test();
	return 0;
}