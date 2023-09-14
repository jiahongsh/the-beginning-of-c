#include<stdio.h>
void menu() {
        printf("*********************************************\n");
		printf("******1.add 2.sub ***************************\n");
		printf("******3.mul 4.div 0.退出*********************\n");
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
	printf("请输入两个计算的数值:");
	scanf_s("%d %d", &x,& y);
	int ret = (*p)(x, y);
	printf("%d\n", ret);
}
int main(){
      int input = 0;
	  int x = 0;
	  int y = 0;

	do {
		//打印菜单
		menu();
		printf("请选择功能>");
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
			printf("退出计算器\n");
		default:
			printf("输入错误\n");

		}
	} while (input);
	return 0;
}