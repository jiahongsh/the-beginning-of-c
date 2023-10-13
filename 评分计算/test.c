#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//评委现场打分，共七人，去除最大值和最小值，取平均
int main() {
	int n = 0;
	int i = 0;
	int sum = 0;
	int max = 0;
	int min = 0;
	while (scanf("%d", &n)==1) {
		
		if (max < n) {
			max = n;
		}
		else if (min > n) {
			min = n;
		}
		sum += n;
		i++;
		if (i == 7) {
			break;
		}
		
	}
	int pr = (sum - max - min)/5;
	printf("%d \n", pr);
	return 0;
}