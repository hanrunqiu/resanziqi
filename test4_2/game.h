#define ROW 3
#define COL 3


#include<stdio.h>
#include<stdlib.h>
#include<time.h>


//函数声明
void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void Playermove(char board[ROW][COL], int row, int col);
void Computermove(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);

//告诉我们四种游戏的状态
//玩家赢-'*'
//电脑赢-'#'
//平局-'Q'
//继续-'C'
char iswin(char board[ROW][COL], int row, int col);