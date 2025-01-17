//
//  main.c
//  11_12
//
//  Created by 潘烨 on 2024/11/12.
//

#include <stdio.h>
#include<stdlib.h>
#include<time.h>

void manu()
{
    printf("*****num_guess_game*****\n");
    printf("*****0.end the game*****\n");
    printf("*****1.begin the game***\n");
   
}

void game()
{
    srand((unsigned int)time(NULL));
    int r = rand()%100+1;
    int guess = 0;
    int count = 5;
    do
    {
        printf("%s\n","please enter a number(1~99) ex:55");
        scanf("%d",&guess);
        if (guess == r)
        {
            printf("bingo\n");
            break;
        }
        else if(guess > r)
        {
            printf("too big\n");
            count--;
            if(count!=0)
            printf("%d times left\n",count);
            else
            {
                printf("you lost\n");
                printf("the num is %d\n",r);
            }
        }
        else
        {
            printf("too small\n");
            count--;
            if(count!=0)
            printf("%d times left\n",count);
            else
            {
                printf("you lost\n");
                printf("the num is %d\n",r);
            }
        }
    }
    while(count);
}
int main ()
{
    int input = 0;
    do
    {
        manu();
        printf("please switch:\n");
        scanf("%d",&input);
        switch (input)
        {
            case 0:
                printf("game over\n");
                break;
            case 1:
                printf("game begin\n");
                game();
                break;
            default:
                printf("error\n");
                break;
        }
    }
    while(input);
    
    return 0;
}
