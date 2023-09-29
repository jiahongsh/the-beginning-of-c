#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>

void copy(char* des, char* sou) {
	*des = *sou;
	des++;
	sou++;
}

void* my_memcpy(void* des, void* sou, size_t num) {
	assert(des && sou);
	void* ret = sou;
	while(num--) {
		copy(des, sou);
	/*	*(char*)des = *(char*)sou;
		des = (char*)des + 1;
		sou = (char*)sou + 1;*/
	}
	return ret;
}

int main() {
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[10] = { 0 };
	memcpy(arr2, arr1, 40);
	int j = 0;
	for (j = 0; j < 10; j++) {
		printf("%d ", arr2[j]);
	}
	return 0;
}