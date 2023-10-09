#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<errno.h>

int main() {
	//FILE* pf = fopen("test.txt", "w"); //写文件
	FILE* pf = fopen("test.txt", "r");//读文件
	//写文件
	/*char i = 0;
	for (i = 'a'; i < 'z'; i++) {
		fputc(i, pf);
	}*/
	//读文件
    //定位文件位置
	fseek(pf, 2, SEEK_SET);
	int  ch = fgetc(pf);
	printf("%c ", ch);
	printf("%d\n", ftell(pf));
	
	//关闭文件
	fclose(pf);
	pf = NULL;
	return 0;
}