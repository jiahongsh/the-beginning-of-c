#include<stdio.h>
void menu() {
        printf("*********************************************\n");
		printf("******1.add 2.sub ***************************\n");
		printf("******3.mul 4.div 0.�˳�*********************\n");
		printf("*********************************************\n");
}

int add(int x,int y) {
	return x + y;
}

int sub(int x, int y) {
	return x - y;
}

int mul(int x, int y) {
	return x * y;
}

int div(int x, int y) {
	return x / y;
}

void cla(int(*p)(int, int)) {
	int x = 0;
	int y = 0;
	printf("�����������������ֵ:");
	scanf_s("%d %d", &x,& y);
	int ret = (*p)(x, y);
	printf("%d\n", ret);
}
int main(){
      int input = 0;
	  int x = 0;
	  int y = 0;

	do {
		//��ӡ�˵�
		menu();
		printf("��ѡ����>");
		scanf_s("%d", &input);
		switch (input) {
		case 1:
			cla(add);
			break;
		case 2:
			cla(sub);
			break;
		case 3:
			cla(mul);
			break;
		case 4:
			cla(div);
			break;
		case 0:
			printf("�˳�������\n");
		default:
			printf("�������\n");

		}
	} while (input);
	return 0;
}