//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“* ”组成的线段图案。
//
//输入描述：
//多组输入，一个整数（1~100），表示线段长度，即“ * ”的数量。
//输出描述：
//针对每行输入，输出占一行，用“ * ”组成的对应长度的线段。
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int n = 0;
    while (scanf("%d", &n) == 1)
    {
        int i = 0;
        for (i = 0; i < n; i++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}