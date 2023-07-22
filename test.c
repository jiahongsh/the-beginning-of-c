#include<stdio.h>
int main() {
	int i = 1;
	int ret = 1;
	int sum = 0;
	int n = 0;
	printf("请输入要累加到的数字：");
		scanf_s("%d", &n);
	for (i =1; i <= n; i++) {
		ret *= i;
		sum += ret;
	}
	printf("%d\n", sum);
	return 0;
}