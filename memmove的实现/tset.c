#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
void copy(char* des, char* sou) {
	*des = *sou;
	des++;
	sou++;
}

void* my_memmove(void* des, void* sou, size_t num) {
	assert(des && sou);
	void* ret = sou;
	if (des < sou) {
        while (num--) {
		copy(des, sou);
		/*	*(char*)des = *(char*)sou;
			des = (char*)des + 1;
			sou = (char*)sou + 1;*/
	       }
	}
	else {
		while (num--) {
			*((char*)des + num )= *((char*)sou + num);
		}
	}
	
	return ret;
}
int main() {
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	my_memmove(arr1 + 2, arr1, 20);
	int i = 0;
	for (i = 0; i < 10; i++) {
		printf("%d ", arr1[i]);
	}
	return 0;
}