#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//a选手：b第二我第三；
//b选手：我第二e第四；
//c选手：我第一d第二；
//d选手：c最后我第三；
//e选手：我第四a第一；
//每个选手都只说对了一半
//请确定排名
int main() {
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	for (a = 1; a <=5; a++) {//遍历
		for (b = 1; b <= 5; b++) {
			for (c = 1; c <= 5; c++) {
				for (d = 1; d <= 5; d++) {
					for (e = 1; e <= 5; e++) {
						if (((b == 2) + (a == 3)) == 1 //赋值语句真返回1，假返回0
							&& ((b == 2) + (e == 4)) == 1
							&& ((c == 1) + (d == 2)) == 1
							&& ((c == 5) + (d == 3)) == 1
							&& ((e == 4) + (a == 1)) == 1) {
							if (a * b * c * d * e == 120) {
								//确定排名确定的要素
								printf("a=%d b=%d c=%d d=%d e=%d", a, b, c, d, e);
							}
						}
					}
				}
			}
		}
	}
	return 0;
}