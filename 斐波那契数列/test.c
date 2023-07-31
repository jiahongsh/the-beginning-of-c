#include<stdio.h>
int count = 0;
int fbn(int n) {
	
	count++;
	if (n ==1) {
		return 1;
	}
	else if (n == 0) {
		return 2;
	}
	else {
      return fbn(n - 1) + fbn(n - 2);
	}
	
}
int main() {
	int n = 0;
	scanf_s("%d", &n);
	int ret = fbn(n);
	printf("%d", count);
	return 0;
}