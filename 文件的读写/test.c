#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<errno.h>

int main() {
	//FILE* pf = fopen("test.txt", "w"); 写文件
	FILE* pf = fopen("test.txt", "r");//读文件
	/*if ( pf== NULL) {
		printf("%s\n", strerror(errno));
		return 1;
	}*/
	//写文件
	/*int i = 0;
	for (i = 'a'; i < 'z'; i++) {

		fputc(i, pf);
	}*/
	//读文件
	int ch = 0;
	while ((ch=fgetc(pf))!=EOF) {
		printf("%c ", ch);
	}
	//关闭文件
	fclose(pf);
	pf = NULL;
	return 0;
}