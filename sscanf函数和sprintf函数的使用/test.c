#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
struct S {
	char arr[10];
	int age;
	double score;
};
int main() {
	struct S s = { "zhangsan",14,50.0f };
	struct S tmp = { 0 };
	char bug[100] = { 0 };
	//将s中的格式化数据转换成字符串放到bug中
	sprintf(bug,"%s %d %f", s.arr, s.age, s.score);
	printf("%s\n", bug);
	//将bug中的字符串转化成格式化数据放到tmp结构体中
	sscanf(bug, "%s %d %f", tmp.arr, &tmp.age, &tmp.score);
	printf("%s %d %f\n", s.arr, s.age, s.score);
		return 0;
}