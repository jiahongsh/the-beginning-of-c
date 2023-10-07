#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void test2(char*p) {
	p = (char*)malloc(40);//p的修改不会影响str，p申请内存，程序结束p销毁，内存泄漏
}
void test() {

	char* str = NULL;
	test2(str);
	strcpy(str, "hello world");//str是空指针，不能拷贝进字符串，报错
	printf("%s\n", str);
}

int main() {
	test();
	return 0;
}