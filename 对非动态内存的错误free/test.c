#include<stdio.h>
#include<stdlib.h>
int main() {
	int a = 3;
	int* p = &a;
	//........
	free(p);
	p = NULL;
	return 0;
}