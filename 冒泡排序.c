#include<stdio.h>
void bubble_sort(int arr[], int sr) {
	int i;
	for (i = 0; i < sr-1;i++)
	{
		//一趟冒泡排序
		int j;
		for (j = 0; j < sr - 1 - i; j++) 
		{
			int temp;
			//交换
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;

			}

		}
	}
 }
int main()
{//冒泡排序
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int i;
	//需要排成0 1 2 3 4 5 6 7 8 9
	int sr = sizeof (arr)/ sizeof (arr[0]);//计算有多少个数
	//printf("%d", sr);
	bubble_sort(arr, sr);
			for (i = 0; i < sr; i++) {
				printf(" %d", arr[i]);
			}
	return 0;
}