#include<stdio.h>

int main() {
	int n = 10;
	float* p = &n;
	printf("n=%d\n", n);
	printf("p=%f\n", *p);
       * p = 10.0;
	   printf("n=%d\n", n);
	   printf("*p=%f\n", *p);
	return 0;
}