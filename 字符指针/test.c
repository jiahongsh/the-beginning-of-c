#include<stdio.h>

int main() {

	char ch = 'w';
	char* p = &ch;
	p = 'b';
	printf("%c", ch);



	//z字符串
	char *p = "abcdef";//把字符串首字母a的地址赋给了ch
	printf("%s", p);
	return 0;
}