#include<stdio.h>

int main() {
	int i;
	char a[2000];//char  -128~127
	for (i = 0; i < 2000; i++) {
		a[i] = -1 - i;
	}
	int ret = strlen(a);
	printf("%d\n", ret);
	return 0;
}