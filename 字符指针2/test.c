#include<stdio.h>

int main() {
	const char* p1 = "abcdef";
	const char* p2 = "abcdef";
	char arr1[] = "abcdef";
	char arr2[] = "abcdef";
	if (p1 == p2) {
		printf("p1==p2\n");
	}
	else {
		printf("p1!=p2\n");//�ַ�ָ��Ŀ��Ϊ�ַ���ʱΪ��Ԫ�صĵ�ַ�������޸ģ�ֻ�ɱ����ã�����ֻ�����һ��abcdef  p1��p2ָ�����ͬһ���ַ��� ��ַ��ͬ
	}

	if (arr1 == arr2) {
		printf("arr1==arr2\n");//�����ǿ�����һ���¿ռ䣬����������Ԫ�ص�ַ���ռ䲻ͬ����ַ��ͬ

	}
	else {
		printf("arr1!=arr2\n");
	}
	return 0;
}