#include<stdio.h>
#include<math.h>
int main() {
	int i = 0;
	
	for (i = 0; i < 100000; i++) {
		//判断数有几位
		int temp = i;
		int n = 1;
		
		while (temp / 10) {
			n++;
			temp /= 10;
		}
		temp = i;
		int sum = 0;
		while (temp) {
			sum+=pow(temp % 10, n);
			temp /= 10;
		}
		if (sum == i) {
			printf("%d ", i);
		}
	}
	return 0;
}