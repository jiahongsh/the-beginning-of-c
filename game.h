#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 3
#define COL 3
//初始化棋盘
void initboard(char board[ROW][COL], int row, int col);

//打印棋盘
void displayboard(char board[ROW][COL], int row, int col);

//玩家下棋
void playerboard(char board[ROW][COL], int row, int col);
 
//电脑下棋
void computermove(char board[ROW][COL], int row, int col);

//判断输赢
//玩家赢-*
//电脑赢-#
//平局-q
//继续-c
char iswin(char board[ROW][COL], int row, int col);