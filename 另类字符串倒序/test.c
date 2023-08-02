#include<stdio.h>


void daoxu(char* arr, int ar) {
	int left = 0;
	int right = ar;
	while (left < right) {
		char temp = 0;
		temp = arr[right];
		arr[right] = arr[left];
		arr[left] = temp;
		left++;
		right--;
	}
}
	int main() {
		char arr[1000] = { 0 };
		gets(arr);
		int ar = strlen(arr) - 1;
		daoxu(arr, ar);
		char* start = arr;
		while (*start) {
              char* end = start;
			while ((*start != ' ') && (*end != '\0')) {
				end++;
			}
			daoxu(start, end - 1);
			if (end != '\0') {
                 end++;
			}
			start = end;
		}
		printf("%s\n", arr);
		return 0;
	}
	
	
