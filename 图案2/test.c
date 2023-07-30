#include<stdio.h>

int main() {
	//上半部分
	int i = 0;
	int line = 0;
	scanf_s("%d", &line);
	for (i = 0; i < line; i++) {
		//一行
		int j = 0;
		for (j = 0; j < line-1-i; j++) {//空格的打印
			printf(" ");
		}
		for (j = 0; j < (2 * i + 1); j++) {//打印*
			printf("*");
		}
		printf("\n");
	}
	//下半部分
	for (i = 0; i < line - 1; i++) {
		int j = 0;
		//一行
		for (j = 0; j < (i + 1); j++){ //空格的打印
			printf(" ");
		}
		for (j = 0; j < 2 * (line - 1 - i) - 1; j++) {//*打印
			printf("*");
		}
		printf("\n");
	}
	return 0;
}