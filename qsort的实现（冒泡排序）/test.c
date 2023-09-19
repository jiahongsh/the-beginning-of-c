#include<stdio.h>

void swap(char* buff1, char* buff2, int width) {
	int i = 0;
	for (i = 0; i < width; i++) {
		char temp = *buff1;
		*buff1 = *buff2;
		*buff2 = temp;
		buff2++;
		buff1++;
	}
}

int com(const void* e1, const void* e2) {
		return (*(int*)e1 > *(int*)e2);
}
void bubble_sort(void* base,int sr,int width,int(*com) (const void*e1,const void*e2)){
	int i;
	for (i = 0; i < sr - 1; i++)
	{
		//一趟冒泡排序
		int j;
		int flag = 1;
		for (j = 0; j < sr - 1 - i; j++)
		{
			//交换
			
			if (com((char*)base+j*width,(char*)base+(j+1)*width)>0 ){
				swap((char*)base + j * width, (char*)base + (j + 1) * width,width);
				flag = 0;
			}
		}
		if (flag == 1) {
			break;
		}
		
	}
}
int main()
{//冒泡排序
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int i;
	//需要排成0 1 2 3 4 5 6 7 8 9
	int sr = sizeof(arr) / sizeof(arr[0]);//计算有多少个数
	//printf("%d", sr);
	bubble_sort(arr, sr, sizeof(arr[0]), com);
	for (i = 0; i < sr; i++) {
		printf(" %d", arr[i]);
	}
	return 0;
}