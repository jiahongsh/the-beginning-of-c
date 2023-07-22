#include<stdio.h>
int main() {
	int arr[3][4] = { 1,2,3,4,2,3,4,5,3,4,5,6 };
	int i, j;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			printf("%d", arr[i][j]);
		   if (j < 3)
				printf(" ");
			else
				printf("\n");
			
		}
	}printf("\n");
	return 0;
}