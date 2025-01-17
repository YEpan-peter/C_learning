///
//  game.c
//  11_20_2
//
//  Created by 潘烨 on 2024/11/20.
//

#include "game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols,char set){
    int i = 0 ;
    for(i=0;i<=rows;i++){
        int j = 0;
        for(j=0;j<=cols;j++){
            board[i][j] = set;
        }
    }
}

void PrintBoard(char board[ROWS][COLS],int row,int col){
    printf("-----扫雷游戏------\n");
    for(int i = 0;i<=row;i++){
        printf("%d ",i);
    }
    printf("\n");
    for( int i = 1;i<=row;i++){
        printf("%d ",i);
        for(int j = 1;j<=col;j++){
            printf("%c ",board[i][j]);
        }
        printf("\n");
    }
    
}

void SetMine(char mines[ROWS][COLS]){
    srand((unsigned int)time(NULL));
    int x = 0;
    int y = 0;
    int count = EASY_COUNT;
    while (count) {
        x = rand()%9+1;
        y = rand()%9+1;
        if (mines[x][y] != '1') {
            mines[x][y] = '1';
            count--;
        }
    }
}

int MineCount(int x,int y,char mines[ROWS][COLS],char show[ROWS][COLS]){
    int count = 0;
    for ( int i=-1; i <= 1; i++) {
        for (int j = -1;j <= 1;j++){
            count +=(mines[x+i][y+j]-'0');
        }
    }
    return count;
}

void MineCheak(char mines[ROWS][COLS],char show[ROWS][COLS]){
    int win = ROW * COL - EASY_COUNT;
    while (win) {
        int x = 0;
        int y = 0;
        printf("行 列\n");
        scanf("%d %d",&x,&y);
        if (x > 0&&x <=ROW&&y > 0&&y <=COL) {
            int  count =  MineCount(x, y, mines, show);
            //printf("count = %d\n",count);
            if (mines[x][y]=='1') {
                printf("游戏结束，你输了\n");
                PrintBoard(mines, ROW, COL);
                break;
            }
            else
            {
                show[x][y] = (count + '0');
                //printf("show[x][y] = %c\n",show[x][y]);
                PrintBoard(show, ROW, COL);
                win--;
            }
        }
        else
            printf("输入数据有问题,请重输\n");
    }
}
