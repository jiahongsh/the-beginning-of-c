//给定一个M为一个数各个位的数字之和，N为各个数字的位数。
//求出可能的最大数字

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int M = 0;
    int N = 0;
    scanf("%d %d", &N, &M);
    int i = 0;
    for (i = 0; i < N; i++) {
        if (M > 9) {
            printf("9");
            M -= 9;
        }
        else {
            printf("%d", M);
            M = 0;
        }
    }

}