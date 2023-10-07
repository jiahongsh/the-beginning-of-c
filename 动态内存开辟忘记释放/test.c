#include<stdio.h>
#include<stdlib.h>
void test() {
	int* p = (int*)malloc(40);
	int flag = 0;
	scanf("%d", &flag);
	if (flag == 5) {
		return ;//此处直接return，不经过free的过程
	}
	free(p);
	p = NULL;

}
int main() {
	
	test();
	return 0;
}