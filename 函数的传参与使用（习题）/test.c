#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//正确的传参修改str
void con(char** p) {
	*p = (char*)malloc(400);
}

	void test() {
	char* str = NULL;
	con(&str);
	strcpy(str, "hello");
	printf(str);
	}

	

int main() {
	test();
	return 0;
}