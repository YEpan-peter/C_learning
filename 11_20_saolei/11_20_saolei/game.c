//
//  game.c
//  11_20_saolei
//
//  Created by 潘烨 on 2024/11/20.
//

#include "game.h"

void InitBoard(char board[ROWS][COLS],int rows, int cols, char set)
{
    for(int i = 0; i < rows; i++)//i表示横坐标
        {
            for(int j = 0; j < cols; j++)//j表示纵坐标
            {
                board[i][j] = set;//用传来的字符赋值
            }
        }
}

void PrintBoard(char board[ROWS][COLS],int row ,int col)
{
    for (int i = 0; i <= col; i++)//这里的col为COL，打印第一行为横坐标
    {
        printf("%d ",i);
    }
    printf("\n");
    for(int i = 1;i <= row;i++)//这里的row为ROW
    {
        printf("%d ",i);//这里是在打印纵坐标
        int j = 0;
        for(j = 1;j <= col;j++)//这里的col为COL
        {
            printf("%c ",board[i][j]);//一个一个的打印方格
        }
        printf("\n");
    }
}


void SetMine(char board[ROWS][COLS], int row, int col)
{
    int x = 0;
    int y = 0;
    int count  = EASY_COUNT;//EASY_COUNT为设置雷的数量
    while(count)//设定循环次数为雷的数量
        {
        x = rand()%row +1;//生成的0<x<10
        y = rand()%col +1;//生成的0<y<10
        if(board[x][y] != '1')//判断雷是否重复
            {
                board[x][y] = '1';//用'1'来表示雷
                count--;
            }
        }
}

int GetMineCount(char board[ROWS][COLS], int x, int y)
{
    int i = 0;
    int count = 0;//创建一个返回值
    for (i = -1; i <= 1; i++)//表示所输入坐标的周围数的行数
    {
        int j = 0;
        for (j = -1; j <= 1; j++)//表示所输入坐标的周围数的列数
        {
            count += (board[x + i][y + j] - '0');//计算返回值
        }
    }
    return count;//返回值count
}

void FindMine(char board_answer[ROWS][COLS], char board_display[ROWS][COLS], int row, int col)
{
    int x = 0;
    int y = 0;
    int win = 0;//设置赢的标志

    while (win < col*row - EASY_COUNT)
    {
        printf("请输入要排查的坐标:\n示例 2 4\n");
        scanf("%d %d", &x, &y);//玩家输入坐标
        if (x >= 1 && x <= row && y >= 1 && y <= col)//判断坐标是否合理
        {
            if (board_answer[x][y] == '1')//输入的坐标是雷
            {
                printf("很遗憾，你踩雷了，游戏结束\n");
                PrintBoard(board_answer, ROW, COL);//打印答案
                break;
            }
            else  //不是雷
            {
                int count = GetMineCount(board_answer, x, y);
                board_display[x][y] = count + '0';//是int类型的count变为char类型再赋值
                PrintBoard(board_display, ROW, COL);//每次都打印更新后的棋盘
                win++;//标志自增
            }
        }
        else
        {
            printf("输入的坐标有误x(1~9),y(1~9)，重新输入\n");
        }
    }
    
    if (win == row * col - EASY_COUNT)//判断赢得条件
    {
        printf("恭喜你，排雷成功\n");
        PrintBoard(board_answer, ROW, COL);//打印答案
    }
}
