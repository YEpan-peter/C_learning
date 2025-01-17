//
//  game.h
//  11_20_saolei
//
//  Created by 潘烨 on 2024/11/20.
//
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#ifndef game_h
#define game_h
#define ROW 9
#define COL 9

#define ROWS ROW + 2
#define COLS COL + 2
#define EASY_COUNT 10

#endif /* game_h */

void InitBoard(char board[ROWS][COLS],int rows,int cols,char set);
void PrintBoard(char board[ROWS][COLS],int row,int col);
void SetMine(char board[ROWS][COLS],int row,int col);
void FindMine(char board[ROWS][COLS], char show[ROWS][COLS], int row, int col);
