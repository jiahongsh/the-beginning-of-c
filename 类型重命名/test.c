#include<Stdio.h>

typedef void(*pf)(int);//类型的重命名

int main() {
	void(*signal(int, void(*)(int)))(int);
	pf signal(int, pf);//等价于上方代码
	return 0;
}