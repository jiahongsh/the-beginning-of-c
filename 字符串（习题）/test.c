#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
char* con() {
	char p[] = "hello world";//p被销毁，str是野指针
	return p;
}
void test() {
	char* str = NULL;
	str = con();
	printf(str);
int main() {
	test();
	return 0;
}