#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<errno.h>

int main() {
	//FILE* pf = fopen("test.txt", "w"); //д�ļ�
	FILE* pf = fopen("test.txt", "r");//���ļ�
	//д�ļ�
	/*char i = 0;
	for (i = 'a'; i < 'z'; i++) {
		fputc(i, pf);
	}*/
	//���ļ�

	fseek(pf, 2, SEEK_SET);
	int  ch = fgetc(pf);
	printf("%c ", ch);
	printf("%d\n", ftell(pf));
	
	//�ر��ļ�
	fclose(pf);
	pf = NULL;
	return 0;
}