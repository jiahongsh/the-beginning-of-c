#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main() {
	int i = 0;
	for (i = 0; i < 10; i++) {
		printf("dile=%s line=%d i=%d\n",__FILE__,__LINE__,i);
	}
	return 0;
}