#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void my_strcat(char* des, char* source) {
	while (*des!='\0') {
		des++;
	}
	/*while (*source!='\0') {
		*des =* source;
		des++;
		source++;
	}*/
	while (*des++ = *source++) {
		;
	}
}

int main() {
	char arr[20] = "hello ";
	my_strcat(arr, "world");
	printf("%s\n", arr);
	return 0;
}