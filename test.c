#include<stdio.h>
#include<windows.h>
int main() {
	unsigned int i = 9;//unsigned �޷��ţ�ֻ�зǸ���
	for (i = 9; i >= 0; i--) {//��i=0ʱ��i--��õ�һ���������
		printf("%u\n",i);
		Sleep(1000);
	}
	return 0;
}