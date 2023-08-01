#include<stdio.h>

int main() {
	int a = 0;
	int b = 0;
	scanf_s("%d %d", &a, &b);
	int m = 1;
	while(1) {
		if ((m % a == 0) && (m % b == 0)) {
			break;
		}
		m++;
	}
	printf("%d", m);
	return 0;
}