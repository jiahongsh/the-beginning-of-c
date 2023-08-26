#include<stdio.h>

int main() {
	int a = 3;
	int b = 5;
	a ^= b;
    b ^= a; 
	a ^= b;
	//µÈ¼ÛÓÚswap(a,b)
	printf("a=%d b=%d\n", a, b);
	return 0;
}