///
//  game.h
//  11_20_2
//
//  Created by 潘烨 on 2024/11/20.
//

#ifndef game_h
#define game_h

#include <stdio.h>

#endif /* game_h */
#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define EASY_COUNT 10

void game();
void InitBoard(char board[ROWS][COLS], int rows, int cols,char set);
void PrintBoard(char board[ROWS][COLS],int row,int col);
void SetMine(char mines[ROWS][COLS]);
void MineCheak(char mines[ROWS][COLS],char show[ROWS][COLS]);
int MineCount(int x,int y,char mines[ROWS][COLS],char show[ROWS][COLS]);
