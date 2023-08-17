#include<stdio.h>
int my_strlen(char*str){
	int count = 0;
	while (*str) {
		str++;
		count++;
	}
	return count;
}
int main() {
	int ret=my_strlen("abcdef");
	printf("%d", ret);
	return 0;
}