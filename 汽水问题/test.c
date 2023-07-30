#include<stdio.h>

int main() {
	int money = 0;
	scanf_s("%d", &money);
	int totol = money;
	int empty = money;
	while (empty / 2) {
		totol += empty / 2;
		empty = empty / 2 + empty % 2;
		//totol 30 35 37 39
		//empty 10 5  3  1
	}
	printf("%d", totol);
	return 0;
}