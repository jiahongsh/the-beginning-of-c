#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

char* my_strstr( char* arr1,  char* arr2) {
	char* s1 = arr1;
	char* s2 = arr2;
	char* p = s1;
	while (*p) {
		s1 = p;
		s2 = arr2;
		while (s1 != '\0' && s2 != '\0' && *s1 ==*s2) {
			s1++;
			s2++;
		}
		if (*s2 == '\0') {
			return p;
		}
		p++;
		
	}
	return NULL;
}
int main() {
	char arr1[] = "abcdef";
	char arr2[] = "bcd";
	//char* ret = strstr(arr1, arr2);
	char* ret = my_strstr(arr1, arr2);
	if (ret == NULL) {
		printf("未找到字符串");
	}
	else {
		printf("%s\n", ret);
	}
	return 0;
}