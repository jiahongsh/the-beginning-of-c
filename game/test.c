#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
void menu() {
	printf("**************************\n");
	printf("****** 1,play 0,exit******\n");
	printf("**************************\n");
}
void game() 
{
	char ret = 0;
	char board[ROW][COL] = { 0 };//��ʼ������
	initboard(board,ROW,COL);
	 displayboard(board, ROW, COL);
	 //����
	 while (1) {
		playerboard( board, ROW, COL);
		
		//�ж���Ӯ
		ret = iswin(board, ROW, COL);
		if (ret != 'c') {
			break;
		}
		displayboard(board, ROW, COL);
		computermove(board, ROW, COL);
		
		//�ж���Ӯ
		ret = iswin(board, ROW, COL); 
		if (ret != 'c') {
			break;
		}
		displayboard(board, ROW, COL);
		if (ret == '*') 
		{
			printf("���Ӯ\n");
		}
		  else if (ret == '#') 
		{
			printf("����Ӯ\n");
		}
		  else if(ret=='q')
		{
			printf("ƽ��\n");
		}
	 }
	   displayboard(board, ROW, COL);
}
int main() {
	srand((unsigned int)time(NULL));//������������������
	int inupt = 0;
	do {
	      menu();//��ӡ�˵�
			printf("��ѡ��>");
		scanf_s("%d", &inupt);
		switch (inupt)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (inupt);
		return 0;
}
//�޷���ʾ��Ϸ���