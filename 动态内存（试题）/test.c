#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void test2(char*p) {
	p = (char*)malloc(40);//p���޸Ĳ���Ӱ��str��p�����ڴ棬�������p���٣��ڴ�й©
}
void test() {

	char* str = NULL;
	test2(str);
	strcpy(str, "hello world");//str�ǿ�ָ�룬���ܿ������ַ���������
	printf("%s\n", str);
}

int main() {
	test();
	return 0;
}