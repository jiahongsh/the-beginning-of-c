#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n;
    int i = 0;
    while (scanf("%d", &n) != EOF) {
   // scanf("%d", &n);
        for (i = 0; i < n; i++)
        {
            int j = 0;
            for (int j = 0; j < n; j++) {
                printf("* ");
            }

            printf("\n");
        }
    }
    return 0;
}