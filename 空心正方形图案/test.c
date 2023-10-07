#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int arr[20][20] = { 0 };
	int n = 0;
	
	while (scanf("%d", &n) == 1) {
       int i = 0;
	   int j = 0;
	   for (i = 0; i < n; i++) {
		   for (j = 0; j < n; j++) {
			   if ((j == 0)||(j==n-1)||(i==0)||(i==n-1)) {
				    printf("* ");
			   }
			    else {
				       printf("  ");
			   }
		     }
		printf("\n");
	  }
	}
		
	

	return 0;
}