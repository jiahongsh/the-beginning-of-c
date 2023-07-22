#include<stdio.h>
#include<assert.h>
//版本一
//char*my_strcpy(char* arr1, char* arr2) {
//  char*ret=arr1;
//	while (*arr1 != '\0') {
//		*arr1 =* arr2;
//		*arr2++;
//		*arr1++;
//	}
//	*arr1 =*arr2;
// return ret;
//}

//版本二
char*my_strcpy(char* arr1, char* arr2)
{
	char* ret = arr1;
	while (*arr1++ = *arr2++) {
		;
	}
	return ret;
}
int main() {
	char arr1[20] = "xxxxxxxxxxxxx";
	char arr2[] = "hi jia";
	//char* p = NULL;
	
       printf("%s", my_strcpy(arr1, arr2));
	
	return 0;
}