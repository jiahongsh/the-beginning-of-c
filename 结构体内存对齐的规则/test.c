#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stddef.h>
int main() {
	struct s1 {
		double d;
		char a;
		int i;
	};
	printf("%d\n",offsetof(struct s1,d) );
	printf("%d\n",offsetof(struct s1, a));
	printf("%d\n", offsetof(struct s1, i));

	return 0;

}