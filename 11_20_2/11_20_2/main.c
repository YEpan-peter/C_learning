//
//  main.c
//  11_20_2
//
//  Created by 潘烨 on 2024/11/20.
//


#include"game.h"

void menu(){
    printf("*****************\n");
    printf("******1.play*****\n");
    printf("******0.exit*****\n");
    printf("*****************\n");
}

void game()
{
    char mines[ROWS][COLS] = {0};
    char show[ROWS][COLS] =  {0};
    
    //初始化
    InitBoard(mines, ROWS, COLS,'0');
    InitBoard(show, ROWS, COLS,'*');
    //打印
    PrintBoard(show, ROW, COL);
    //布置雷
    SetMine(mines);
    //PrintBoard(mines, ROW, COL);//测试用
    //检查是否为雷
    MineCheak(mines,show);
}
    

int main()
    {
        int input = 0;
        do
        {
            menu();
            printf("请输入<\n");
            scanf("%d",&input);
            switch (input)
            {
                case 1:
                    game();
                    continue;
                case 0:
                    printf("游戏结束\n");
                    break;
                default:
                    printf("请重新输入\n");
                    break;
            }
        } while (input);
        return 0;
    }
