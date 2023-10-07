#include<stdio.h>
#include<stdlib.h>
int* tset() {
	int* p = (int*)malloc(40);
	if (p == NULL) {
		return p;
	}
	return p;
}
int main() {
	int* ret = tset();//由p开辟，由ret接收，忘记释放
	return 0;
}