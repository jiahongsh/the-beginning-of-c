//写一个函数，求两个整数之和，要求在函数体内不得使用 + 、 - 、 * 、 / 四则运算符号。
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(){
    int n=0;
    int m=0;
   scanf("%d %d",&n,&m);
   int i=0;
   for(i=0;i<m;i++){
       n++;
   }
   printf("%d",n);
    return 0;
}

