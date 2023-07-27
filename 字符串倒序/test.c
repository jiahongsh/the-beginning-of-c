#include<stdio.h>

int main()
{
	char arr[1000] = { 0 };
	gets(arr);
	int right = strlen(arr)-1;
	int i = 0;
	int left = 0;

	
	while (left < right) {
		char temp = 0;
		temp = arr[right];
		arr[right] = arr[left];
		arr[left] = temp;
		left++;
		right--;
	}
		printf("%s", arr);
		//int j = 0;
		/*for (j = 0; j < sr - 1; j++) {
			printf("%d", arr[j]);*/
	//	}
	return 0;
}