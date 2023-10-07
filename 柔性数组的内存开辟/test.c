#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<errno.h>

struct s {
	int i;
	int arr[];
};
int main() {
	struct s* p = (struct s*)malloc(sizeof(struct s) + 40);//含有柔性数组的结构体只能开辟动态内存
	if (p == NULL) {
		printf("%s\n", strerror(errno));
		return;
	}
	int i = 0;
	//输入
	for (i = 0; i < 10; i++) {
		p->arr[i] = i;
	}
	//输出
	for (i = 0; i < 10; i++) {
		printf("%d", p->arr[i]);
	}
	struct s* str = (struct s*)realloc(p, sizeof(struct s) + 80);//该数组大小可随时通过realloc函数改变
	if (str != NULL) {
		p = str;
        str=NULL;
	}
    free(p);
    p=NULL;
	return 0;
}
