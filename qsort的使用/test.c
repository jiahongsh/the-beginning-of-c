#include<stdio.h>

int cmp(const void* e1,const void* e2) {
	if (*(int*)e1 > *(int*)e2) {
		return 1;
	 if (*(int*)e1 < *(int*)e2) {
		return -1;
	 }
	 else {
		 return 0;
	 }
	}
	/*return (*(int*)e1 > *(int*)e2);*/
}

int main() {
	int arr[10] = { 9,8,7,6,5,4,3,2,1 };
	int sr = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sr, sizeof(arr[0]), cmp);
	
	int i = 0;
	for (i = 0; i < sr; i++) {
		printf("%d", arr[i]);
	}
	return 0;
}