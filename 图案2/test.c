#include<stdio.h>

int main() {
	//�ϰ벿��
	int i = 0;
	int line = 0;
	scanf_s("%d", &line);
	for (i = 0; i < line; i++) {
		//һ��
		int j = 0;
		for (j = 0; j < line-1-i; j++) {//�ո�Ĵ�ӡ
			printf(" ");
		}
		for (j = 0; j < (2 * i + 1); j++) {//��ӡ*
			printf("*");
		}
		printf("\n");
	}
	//�°벿��
	for (i = 0; i < line - 1; i++) {
		int j = 0;
		//һ��
		for (j = 0; j < (i + 1); j++){ //�ո�Ĵ�ӡ
			printf(" ");
		}
		for (j = 0; j < 2 * (line - 1 - i) - 1; j++) {//*��ӡ
			printf("*");
		}
		printf("\n");
	}
	return 0;
}