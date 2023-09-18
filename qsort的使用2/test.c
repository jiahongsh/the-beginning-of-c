#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct stu
{
	char name[20];
	int age;
};

int com(const void* e1,const void*e2) {
	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
}
int main() {

	struct stu s[10] = { {"zhangsan",15},{"lisi",14},{"zhaosi",13}};
	int sr = sizeof(s) / sizeof(s[0]);
	qsort(s, sr, sizeof(s[0]), com);
	//for (int i = 0; i < sr; i++) {
		//printf("%d\n"s);
	//}
	return 0;
}
