#include<Stdio.h>

typedef void(*pf)(int);//���͵�������

int main() {
	void(*signal(int, void(*)(int)))(int);
	pf signal(int, pf);//�ȼ����Ϸ�����
	return 0;
}