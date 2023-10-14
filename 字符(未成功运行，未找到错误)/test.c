#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	char a = 0;
	char ch;
	while (ch = getchar() != '\n') {
		if (a % 2 != 0 && (ch >= 'a' && ch <= 'z')) {
			ch = ch - 'a' + 'A';
		}
		a++;
		putchar(ch);
	}
	printf("\n");
	return 0;
}