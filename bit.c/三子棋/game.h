#pragma once

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define ROW 3
#define COL 3


//初始化棋盘
void Initboard(char board[ROW][COL], int row, int col);
//打印棋盘
void Displayboard(char board[ROW][COL], int row, int col);
//玩家下棋
void Playermove(char board[ROW][COL], int row, int col);
//电脑下棋
void Computermove(char board[ROW][COL], int row, int col);
//判断输赢
char IsWin(char board[ROW], int row, int col);

