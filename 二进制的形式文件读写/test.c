#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<errno.h>

struct S{
	char arr[10];
	int age;
	float score;


};
int main() {
	struct S s = { "zhanfsan",13,50.00f };
	//FILE* pf = fopen("test.txt", "wb"); //二进制的形式写文件
	FILE* pf = fopen("test.txt", "rb"); //二进制的形式读文件
	//fwrite(&s,sizeof(struct S),1,pf);
	fread(&s, sizeof(struct S), 1, pf);
	printf("%s %d %f\n", s.arr, s.age, s.score);
	//关闭文件
	fclose(pf);
	pf = NULL;
	return 0;
}