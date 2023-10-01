#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int n = 0;
	int month=0;
	int day = 0;
	int flag = 0;
	printf("请输入购买金额：");
	scanf("%d", &n);
	printf("请输入日期：");
	scanf("%d %d", &month, &day);
	printf("是否有优惠全：");
	scanf("%d", &flag);
	if (month == 11 && day == 11) {
		n /= 10;
		n = n * 7;
		if (flag==1) {
			n = n - 50;
		}
		else if (month == 12 && day == 12) {
			n /= 10;
			n = n * 8;
			if (flag == 1) {
				n = n - 50;
			}
		}

		if (n < 0) {
			n = 0;
		}
		printf("%d", n);
	}

	return 0;
}