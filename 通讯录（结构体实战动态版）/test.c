#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"contact.h"


int main() {
	int input = 0;
	contact con;//ͨѶ¼
	//��ʼ��ͨѶ¼
	initcontact(&con);
	do {
		//��ӡ�˵�
		menu();
		printf("��ѡ����:");
		scanf("%d", &input);
		//ѡ���ִ��
		switch (input) {
		case 1:
			addconstact(&con);
			break;
		case 2:
			delcontact(&con);
			break;
		case 3:
			searchcontact(&con);
			break;
		case 4:
			modifycontact(&con);
			break;
		case 5:
			showcontact(&con);
			break;
		case 6:
			sortconstact(&con);
			break;
		case 0:
			distorycontact(&con);
			printf("�˳�ͨѶ¼\n");
			break;
		default:
			printf("�������\n");
			break;
		}
	} while (input);
}