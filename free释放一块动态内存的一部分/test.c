#include<stdio.h>
#include<stdlib.h>

int main() {
	int* p = (int*)malloc(40);
	int i = 0;
	for (i = 0; i < 10; i++) {
		*p = i;
		p++;
	}
	free(p);//p的位置变了不能free原来p所指向开辟的空间
	p = NULL;
	return 0;
}