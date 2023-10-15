#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	char a[100] = "we are happy";
	char* str = a;
	int count = 0;
	int n = 0;
	//有几个空格
	while (*str) {
		if (*str == ' ') {
			count++;
		}
		str++;

	}
	
	char* end2 = (str+ count * 2-1);
	char* end1 = str-1;
	while (1) {
		if (*end1 == ' ') {
			*end2= 0;
			end2--;
			*end2= 2;
			end2--;
			*end2= '%';
			end2--;
			end1--;
		}
		*end2 = *end1;
		end1--;
		end2--;
		if (end1 == a) {
			break;
		}
		printf("%s\n", a);
		
	}
	return 0;
}


int main() {

	return 0;
}