#include<stdio.h>

int main() {

	char ch = 'w';
	char* p = &ch;
	p = 'b';
	printf("%c", ch);



	//z�ַ���
	char *p = "abcdef";//���ַ�������ĸa�ĵ�ַ������ch
	printf("%s", p);
	return 0;
}