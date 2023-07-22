#include<stdio.h>
//°æ±¾1
//int main() {
//	int i = 0;
//	int arr[10] = {0};
//	for (i =0; i < 10; i++) {
//		scanf_s("%d", &arr[i]);
//	}
//	int max = arr[0];
//	int min = arr[0];
//	
//	for (i = 0; i < 10; i++) {
//		if (max < arr[i])
//			max = arr[i];
//		if (min > arr[i])
//			min = arr[i];
//	}
//	int sum = max - min;
//	printf("%d", sum);
//	return 0;
//}

//°æ±¾2
int main() {
	int i = 0;
	int arr[10] = { 0 };
	int max = arr[0];
	int min = arr[0];

	for (i = 0; i < 10; i++) {
		scanf_s("%d", &arr[i]);
		if (max < arr[i])
			max = arr[i];
		if (min > arr[i])
			min = arr[i];
	}
	int sum = max - min;
	printf("%d", sum);
	return 0;
}