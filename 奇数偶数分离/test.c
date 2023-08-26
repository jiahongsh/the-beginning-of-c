#include<stdio.h>

int main() {
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int i = 0;
	int sr = sizeof(arr) / sizeof(arr[0]);
	// ‰»Î
	//	for (i = 0; i < sr; i++) {
	//		//scanf_s("%d", &arr[i]);
	//}
		int arr1[5] = {0};
		int arr2[5] = {0};
		int z = 0;
		int b = 0;
		//≈≈–Ú
		for (i = 0; i < sr; i++) {
			
			if (arr[i] % 2 == 0) {
				
				arr2[z] = arr[i];
				z++;
			}
			
		}

		for (i = 0; i < sr; i++) {
                
			if (arr[i] % 2 != 0) {
				
				arr1[b] = arr[i];
				b++;
			}
		}
		// ‰≥ˆ
		for (i = 0; i < 5; i++) {
			printf(" %d", arr1[i]);
		}
		for (i = 0; i < 5; i++) {
			printf(" %d", arr2[i]);
		}
		printf("\n");
		return 0;
}

//int main() {
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 11; i++) {
//        scanf_s("%d", &arr[i]);
//	}
//	
//	for (i = 0; i < 11; i++) {
//		printf("%d", arr[i]);
//	}
//	return 0;
//}