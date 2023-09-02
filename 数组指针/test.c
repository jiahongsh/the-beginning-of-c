#include<stdio.h>


void print1(int arr[3][5], int c, int r) {
	int i = 0;
	for (i = 0; i < c; i++) {
		int j = 0;
			for (j = 0; j < r; j++) {
				printf("%d ", arr[i][j]);
			}
			printf("\n");
	}
}

void print2(int(*p)[5], int c, int r) {
	
	int i = 0;
	for (i = 0; i < c; i++) {
		int j = 0;
		for (j = 0; j < r; j++) {
			printf("%d ", *((*p+i)+j));
		}
		printf("\n");
	}
}
int main() {
	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
	print1(arr, 3, 5);
	print2(arr, 3, 5);
	return 0;
}