#include<stdio.h>

int main() {
	int year = 0;
	int mounth = 0;
	int day = 0;
	int ret[13] = { 0,31,28.31,30,31,30,31,31,30,31,30,31 };
	printf("请输入年份和月份:");
	scanf_s("%d%d", &year,& mounth);
	if (mounth == 2) {
         if ((year % 4 == 0 && year % 400 != 0) || (year % 400 == 0)) {
			 ret[2]++;
	   }
	}
	printf("%d \n", ret[mounth]);
	return 0;
}