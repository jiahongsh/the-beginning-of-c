#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>
#include<ctype.h>
#include<limits.h>
enum status {
	VALID,//0
	INVALID//1
}str=INVALID;
my_atoi(char* arr) {
	//空指针
	//空字符串
	//前面有空格
	// 正负数
	//中间出现字母
	//空指针  
	int flag = 1;
	assert(arr);
	//空字符串
	if (*arr == '\0') {
		return 0;//默认非法零
	}
	while (isspace(*arr)) {
		arr++;
	}
	//正负数
	
	 if (*arr == '-') {
		flag = -1;
		arr++;
	}
	//中间出现字母
	int st = 0;
		
	while (*arr) {
		if (isdigit(*arr)) {
			st = st * 10 +flag *(*arr -'0');
            if(st>INT_MAX||st<INT_MIN){
                    return 0;
            }
            	}
		else {
			return st;
		}
		arr++;

	}
    if(*arr=='\0'){
        str=VALID
    }
	return  st;
}

int main() {
	char arr[20] = "-12456";
	int my_ret = my_atoi(arr);
	if (str == VALID) {
		printf("合法返回：%d", my_ret);
	}
	else if (str = INVALID) {
		printf("非法返回%d", my_ret);
	}
	//int ret = atoi(arr);
	//printf("%d", ret);
	
	return 0;
}