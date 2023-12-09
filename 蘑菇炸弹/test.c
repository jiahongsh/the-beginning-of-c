#include <stdio.h>
#include <stdlib.h>

int main() {

    int i = 0;
    int n = 0;
    int input = 0;
    scanf("%d", &n);

    int arr[100] = { 0 };
    for (i = 0; i < n; i++) {
        scanf("%d", &input);
        arr[i] = input;
    }

    for (i = 1; i < n - 1; i++) {
        if (arr[i] > (arr[i - 1] + arr[i + 1])) {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}