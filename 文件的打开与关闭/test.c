#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<errno.h>

int main() {
	FILE*p=fopen("textt.txt", "r");
	if (p == NULL) {

		printf("%s", strerror(errno));
		return;
	}
	//读文件
    //。。。。/
	//。。。/

	fclose(p);
	p = NULL;
	//关闭文件
	return 0;
}