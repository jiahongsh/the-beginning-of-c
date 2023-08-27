#include<stdio.h>

int main() {
	int n = 0;
	int m = 0;
	scanf_s("%d %d", &n, &m);
	int arr1[1000] = {0};
	int arr2[1000] = {0};
	//ÊäÈë
	int i = 0;
	for (i = 0; i < n; i++) {
		scanf_s("%d", &arr1[i]);
	}
	for (i = 0; i < m; i++) {
		scanf_s("%d", &arr2[i]);
	}
	//ÅÅĞò
	int j = 0;
	int k = 0;
	while (j < n && k < m) {
		if (arr1[j] < arr2[k]) {// 11 44 66 77 88 99
                                // 12 34 56 88 98 100 101
			printf("%d ", arr1[j]);
				j++;
		}
		else {
			printf("%d ", arr2[k]);
			k++;
		}
	}
	if (j < n) {
		for (; j < n;j ++) {
			printf("%d", arr1[j]);
		}
	}
	else {
		for (; k < m; k++) {
			printf("%d", arr2[k]);
		}
	}
	printf("\n");
	return 0;
}