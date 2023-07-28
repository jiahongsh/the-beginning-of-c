#include<stdio.h>

int main() {
	int i = 0;
	int a = 0;
	int n = 0;
	scanf_s("%d %d", &a,&n);
	int sum = 0;
	for (i = 0 ; i < n; i++) {
		sum += a;
		a = a + a * 10;
	}
	printf("%d", sum);
	return 0;
}