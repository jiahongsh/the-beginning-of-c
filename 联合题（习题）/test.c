#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

	union {
		short k;
		char b[2];
	}*s,a;
	s = &a;
	s->b[0] = 0x39;
	s->b[1] = 0x38;
	printf("%x\n", a.k);
	return 0;
}