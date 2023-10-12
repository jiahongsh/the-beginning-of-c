#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main() {
	
	int i = 0;
	FILE* pf = fopen("text.txt", "w");
	if (pf == NULL) {
		perror("fopen");
		return EXIT_FAILURE;//失败返回
		//return EXIT_SUCCESS;//成功返回
	}
	for (i = 0; i < 10; i++) {
		printf("dile=%s line=%d date=%s time=%s i=%d\n", __FILE__, __LINE__, __DATE__, __TIME__, i);
	}
	return 0;
}