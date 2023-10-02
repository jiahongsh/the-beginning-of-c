#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
void move(char* sou, char* end) {
	
	while (sou < end) {
        char temp = *sou;
	   *sou = *end;
	   *end = temp;
	   sou++;
	   end--;
	}
}

void left_move(char* arr, int ret,int k) {
	move(arr,arr+k-1);//左边
	move(arr+k,arr+ret-1);//右边
	move(arr,arr+ret-1);//整体
}

int main() {
	char arr[] = "abcdef";
	int k = 0;
	scanf("%d", &k);

	int i = 0;
	int len = strlen(arr);
	k %= len;
	
		left_move(arr, len,k);
	
	printf("%s\n", arr);
	return 0;
}