#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
struct str {
		int data[100];
		int num;
	};
//结构体接收
void printf1(struct str ss) {
	int i = 0;
	for (i = 0; i < 3; i++) {
		printf("%d ", ss.data[i]);
	}
	printf("%d\n", ss.num);
}
//结构体指针接收
void printf2(struct str* ps) {
	int i = 0;
	for (i = 0; i < 3; i++) {
		printf("%d ", ps->data[i]);
	}
	printf("%d\n",ps->num);
}


int main() {
	struct str s = { {1,2,3},100 };
	printf1(s);
	printf2(&s);
	return 0;
}