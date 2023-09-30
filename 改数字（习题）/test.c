#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main() {
	int n = 0;
	int count = 0;
	int i = 0;
	printf("请输入一个整数：");
	scanf("%d", &n); 
	while(n) {
		

		int bit = n % 10;
		int num = n / 10;
		if (bit % 2 == 0) {
			bit = 0;//偶数
		}
		else {
			bit = 1;//奇数
		}
		
		count += bit * pow(10, i);
		i++;
		n = num;
	}
	printf("%d\n", count);
	return 0;
}