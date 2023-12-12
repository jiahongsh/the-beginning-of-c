
//现在有n堆石子围成一个环，
//第i堆有a; 个石子，每次迪迦奥特曼可以选择相邻的2堆石子, 将这两堆石子合并，
//合并后的石子个数为两堆石子个数之和，合并的代价为两堆石子个数之积，
//迪迦奥特曼想知道将这n堆石子合并成1堆的最小代价。
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{

    int n = 0;
    scanf("%d", &n);
    int i = 0;
    int arr[n];
    int input = 0;
    for (i = 0; i < n; i++) {
        scanf("%d", &input);
        arr[i] = input;
    }
    if (n == 1) {
        return arr[0];
    }
    //从小到大排序
    for (i = 0; i < n - 1; i++) {
        int j = 0;
        for (j = 0; i < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
    int sum = 0;
    int count = arr[0];
    for (i = 0; i < n - 1; i++) {

        sum = sum + count * arr[i];
        count += arr[i];


    }
    printf("%d", sum);
    // 请在此输入您的代码
    return 0;
}