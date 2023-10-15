#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main() {
	int a =1;
	int b= 1;
	int n = 0;
	printf("请输入数字：");
	scanf("%d", &n);
	while (n>a) {
		int c = b;
		int d = a;
		a = c;
        b += d;
	}
	int min = n - a;
	int max = b - n;
	if (min < 0) {
		min = -min;
	}
	if(max<0){
		max = -max;
	}
int ret=	(min < max) ? (min) : (max);
printf("%d\n", ret);

	return 0;
}