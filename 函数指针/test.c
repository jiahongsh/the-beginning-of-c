#include<stdio.h>
  
int add(int x, int y) {
	return x + y;
}

int main() {
	int(*p)(int,int ) = add;
	int ret = (*p)(3, 5);
	printf("%d\n", ret);


	printf("%p\n", add);//




	return 0;
}



