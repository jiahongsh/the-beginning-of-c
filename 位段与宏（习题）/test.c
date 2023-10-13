#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	unsigned char p[4];
	struct s {
		unsigned char a;//一个字节
		unsigned char b : 1;//后三个公用一个字节
		unsigned char c : 2;
		unsigned char d : 3;
	}*pr;
	pr = (struct s*)p;
	memset(p, 0, 4);
	//p的四个字节 00000000 00000000 00000000 00000000
	pr->a = 2;//  00000010 00101001
	pr->b = 3;  //  0000 0010 0010 1001
	pr->c = 4;  //   0     2    2     9
	pr->d = 5;
	printf("%02x %02x %02x %02x", p[0], p[1], p[2], p[3]);
	return 0;
}