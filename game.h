#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 3
#define COL 3
//��ʼ������
void initboard(char board[ROW][COL], int row, int col);

//��ӡ����
void displayboard(char board[ROW][COL], int row, int col);

//�������
void playerboard(char board[ROW][COL], int row, int col);
 
//��������
void computermove(char board[ROW][COL], int row, int col);

//�ж���Ӯ
//���Ӯ-*
//����Ӯ-#
//ƽ��-q
//����-c
char iswin(char board[ROW][COL], int row, int col);