#pragma once

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define ROW 3
#define COL 3


//��ʼ������
void Initboard(char board[ROW][COL], int row, int col);
//��ӡ����
void Displayboard(char board[ROW][COL], int row, int col);
//�������
void Playermove(char board[ROW][COL], int row, int col);
//��������
void Computermove(char board[ROW][COL], int row, int col);
//�ж���Ӯ
char IsWin(char board[ROW], int row, int col);

