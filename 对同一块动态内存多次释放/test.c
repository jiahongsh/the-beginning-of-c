#include<stdio.h>
#include<stdlib.h>

int main() {
	int* p = (int*)malloc(40);
	//........

	free(p);
	//p=NULL;需要及时p置为空指针
	//....
	free(p);
	return 0;
}