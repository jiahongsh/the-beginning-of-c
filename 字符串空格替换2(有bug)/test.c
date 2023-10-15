#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//int main() {
//	char* a1 = "we are struct";
//	char a2[100] = { 0 };
//	int i = 0;
//	char* str = a1;
//	while (1) {
//		if (*str ==' ') {
//			str++;
//			a2[i] = '%';
//			i++;
//			a2[i] = '2';
//			i++;
//			a2[i] = '0';
//			i++;
//		}
//		else {
//			a2[i] = *a1;
//		   str++;
//			 i++;
//		}
//		
//		if (a1 == '\0') {
//			break;
//		}
//	
//		printf("%s", a2);
//
//	}
//	return 0;
//}
void blank(char* str,int  length) {
	char* cur = str;
	int count = 0;
	while (*cur) {
		if (*cur == ' ') {
			count++;
		}
		cur++;
	}
	int end1 = length - 1;
	int end2 = length - 1 + count * 2;


	while (end1 != end2) {
		if (str[end1] != ' ') {
			str[end2--] = str[end1--];
		}
		else {
			str[end2--] = '0';
			str[end2--] = '2';
			str[end2--] = '%';
			end1--;
		}
	}
}



int main() {
	char* p = "we are happy";
int  i = strlen(p);
	
	blank(p, i);
	printf("%s\n", p);
	return 0;
}