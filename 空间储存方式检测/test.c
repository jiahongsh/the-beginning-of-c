#include<stdio.h>

int key() {
	int a = 1;
	//000000000000000000000000001Դ��
	// 0x 00 00  00 01 ʮ������
	int* p = (char* )&a;
	return *p;
}
	int main() {

	int ret=key();
	if (ret == 1) {
		printf("С��\n");
	}
	else {
		printf("���\n");
	}
	return 0;
}