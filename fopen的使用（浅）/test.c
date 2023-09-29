#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<errno.h>
int main() {
	FILE* pf = fopen("test.test", "r");
	if (pf ==NULL) {
		printf("%s\n", strerror(errno));
	}
	else {
		;
	}
	return 0;
}