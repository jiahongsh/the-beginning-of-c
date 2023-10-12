#include<stdio.h>
#define add(x) ((x)*(x))//定义一个宏
int main() {
	int n = 0;
	scanf("%d", &n);
	int r = add(n);//使用宏
	printf("%d", r);
	return 0;
}