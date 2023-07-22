#include<stdio.h>
int sum(int n) {
	if (n <= 2) {
		return n;
	}
	else {
		return sum(n - 1) + sum(n - 2);
	}
}
int main() {
	int n = 0;
	printf("ÇëÊäÈëÌ¨½×Êı");
	scanf_s("%d",& n);
	int m=sum(n);
	printf("%d\n", m);
	
	return 0;
}