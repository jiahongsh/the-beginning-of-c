#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int key() {
	union un {
		char a;
		int i;
	}u;
	u.i = 1;
	return u.a;
}
int main() {

	int ret = key();
	if (ret == 1) {
		printf("С��\n");
	}
	else if (ret == 0) {
		printf("���\n");
	}
	return 0;
}