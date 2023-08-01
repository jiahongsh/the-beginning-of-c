#include<stdio.h>
 
int main() {
	int a = 0;
	int b = 0;
	scanf_s("%d %d", &a, &b);
	int i = 1;	
	while (i*a%b) {
		i++;
	}
	printf("%d", i * a);
	return 0;
}