#include<stdio.h>
void fun(int x, int* y) { *x *= *y; };
void fun(int* x, int y) { *x += y; };
int* fun(int* x, int y) { return x += y; };
void fun(int x, int* y) { x *= *y; };
//1.void fun(int x, int* y) { *x *= *y; }
//解析：x为整形，不是指针，所以用* 取值错误。
//2.void fun(int* x, int y) { *x += y; }
//解析：x为int型指针，* 对x地址取值后* x = *x + y，表达式正确；
//3.int* fun(int* x, int y) { return x += y; }
//解析：fun返回值为int指针， return x += y可以转化为 地址位移y个int大小，将位移后的值再付给x， x作为函数返回。故正确
//4.void fun(int x, int* y) { x *= *y; }
//解析：x *= *y；->x = x * (*y); 因为y是int指针，* 取值和int相乘，表达式正确；


int main() {
	
	return 0;
}