#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//����һ���������� nums ��һ������Ŀ��ֵ target�������ڸ��������ҳ� ��ΪĿ��ֵ target  ���� ���� ���������������ǵ������±ꡣ
//
//����Լ���ÿ������ֻ���Ӧһ���𰸡����ǣ�������ͬһ��Ԫ���ڴ��ﲻ���ظ����֡�
//
//����԰�����˳�򷵻ش𰸡�
//


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int i = 0;
    int j = 0;
    int* a = (int*)malloc(sizeof(int) * 2);
    for (i = 0; i < numsSize - 1; i++) {
        for (j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                a[0] = i;
                a[1] = j;
                *returnSize = 2;
                return a;
                break;
            }
        }
    }
    return a;
}

int main() {
    int nums[10] = { 1,2,3,4,5,6,7,8,9 };
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int target = 0;
    int* returnSize =0;
    twoSum(nums, numsSize, target, returnSize);
    return 0;
}