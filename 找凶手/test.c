#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//嫌疑人审讯
//四个人有一个说了假话
//a说：不是我
//b说：是c
//c说：是d
//d说：c在胡说

//int main() {
//	int 	killer = 0;
//	for (killer = 'a'; killer < 'd'; killer++) {
//		if (((killer != 'a') +( killer == 'c')+( killer == 'd') +( killer != 'd'))==3) {
//			printf("%c", killer);
//		}
//	}
//	return 0;
//}

int main() {
	int killer = 0;
	for (killer = 0; killer < 4; killer++) {
		if (((killer != 1) + (killer == 3) + (killer == 4) + (killer != 4)) == 3) {
			if (killer == 1) {
				printf("a\n");
			}
			else if (killer == 2) {
				printf("b\n");
			}else if(killer == 3) {
				printf("c\n");
			}
			else {
				printf("d\n");
			}
		}
	}
	return 0;
}