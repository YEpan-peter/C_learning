//
//  main.c
//  11_20_saolei
//
//  Created by 潘烨 on 2024/11/20.
//

#include "game.h"
void Menu()
{
    printf("*****************\n");
    printf("*****  MENU  ****\n");
    printf("***** 1.play ****\n");
    printf("******0.exit*****\n");
    printf("*****************\n");
}

void game()
{
    char board_answer[ROWS][COLS] = {0};//存放雷的信息
    char board_display[ROWS][COLS] = {0};//存放排查出的雷的信息
    //初始化棋盘
    InitBoard(board_answer, ROWS, COLS, '0');
    InitBoard(board_display, ROWS, COLS, '*');
    //布置雷
    SetMine(board_answer, ROW, COL);
    //打印棋盘
    PrintBoard(board_display, ROW, COL);
    //排查雷
    FindMine(board_answer, board_display, ROW, COL);
}

int main()
{
    int input = 0;
    srand((unsigned int)time(NULL));

    do
    {
        Menu();
        printf("请选择:>");
        scanf("%d", &input);
        switch (input)
        {
        case 1:
            game();
            break;
        case 0:
            printf("退出游戏\n");
            break;
        default:
            printf("选择错误，重新选择\n");
            break;
        }
    } while (input);
    return 0;
}
