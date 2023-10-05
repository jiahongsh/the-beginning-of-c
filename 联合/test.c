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
		printf("Ð¡¶Ë\n");
	}
	else if (ret == 0) {
		printf("´ó¶Ë\n");
	}
	return 0;
}