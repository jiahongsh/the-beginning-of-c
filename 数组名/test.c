#include<Stdio.h>

int main() {

	int arr[10] = { 0 };
	printf("%d\n", arr);//��Ԫ�ص�ַ
	printf("%d\n", arr+1);//����һ��int �ĸ��ֽ�
	printf("%d\n", &arr );//&arr������������ĵ�ַ
	printf("%d\n", &arr + 1);//������������
	printf("%d\n", &arr[0]);//��Ԫ�ص�ַ
	printf("%d\n", &arr[0]+1);//�����ĸ��ֽ�
	return 0;
}