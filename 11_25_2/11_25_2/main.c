//
//  main.c
//  11_25_2
//
//  Created by 潘烨 on 2024/11/25.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void game()
{
    int r = rand()%99+1;
    printf("猜数字游戏开始\n");
    do {
        printf("请猜数字(1~99)\n");
        int guess = 0;
        scanf("%d",&guess);
        if(guess > 0&&guess < 100){
            if (guess == r) {
                printf("你猜对了！\n");
                break;
            }else if(guess > r)
            {
                printf("你猜大了，请重新猜\n");
            }
            else{
                printf("你猜小了，请重新猜\n");
            }}
        else{
            printf("输入的数字有问题，请重新输入\n");
        }
        
    } while (1);
}

int main() {
    srand(time(NULL));
    int input = 0;
    do {
        printf("***************\n");
        printf("*****1.play****\n");
        printf("*****0.exit****\n");
        printf("***************\n");
        printf("请选择：\n");
        scanf("%d",&input);
        switch (input) {
            case 1:
                game();
                break;
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
