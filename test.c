#include<stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	int sum=0;
	printf("ÇëÊäÈë·ûºÅ¹æ¸ñ:");
	scanf_s("%d",& sum);
	for (i = 0; i < sum; i++)
	{
		for (j = 0; j < sum; j++) {
			if (j == i || j + i == sum - 1) {
                  printf("*");
			}
			else {
				printf(" ");
			}
				
		}
		printf("\n");
	}
	return 0;
}