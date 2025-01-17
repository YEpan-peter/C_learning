//
//  main.c
//  11_11
//
//  Created by 潘烨 on 2024/11/11.
//
    


//int main()
//{
//    int count = 0;
//    for (int i = 100; i <= 200; i++)
//    {
//        int flag = 0;
//        for (int p = 2; p < i; p++)
//        {
//            
//            if (i % p == 0)
//            {
//                flag++;
//            }
//            
//        }
//        if(flag == 0)
//        {
//            printf("%d\n",i);
//            count++;
//        }
//        
//    }
//    printf("%d",count);
//    return 0;
//}

//int main()
//{
//    int i = 0;
//    int p = 0;
//    int a = 0;
//    int b = 0;
//    do{
//        
//        printf("%s","please input i:");
//        scanf("%d",&i);
//        printf("%s","please input p:");
//        scanf("%d",&p);
//        a = i/p;
//        b = i%p;
//        printf("%d\n",a);
//        printf("%d\n",b);
//    }
//    while (/*scanf("%d",&i)!=*/ 1) ;
//    
//    return 0 ;
//}
#include <stdio.h>
#include<time.h>
#include<stdlib.h>
void menu()
{
    printf("%s","******猜数字游戏******\n");
    printf("%s","****输入 1 开始游戏****\n");
    printf("%s","****输入 0 结束游戏****\n");
}
void game()
{
    int r = rand();
    r = r%100+1;
    int guess = 0;
    int count = 5;
    while (count)
    {
        printf("你还有%d次机会\n",count);
        printf("请输入数字\n");
        scanf("%d",&guess);
        if (guess == r) {
            printf("你猜对了，总共用了%d次\n",count-4);
            break;
        }
        else if(guess > r){
            count -=1;
            printf("你猜大了\n");
        }
        else
        {
            count--;
            printf("你猜小了\n");
        }
        if (count==0) {
            printf("你输了\n");
            printf("正确数字是%d",r);
        }
    }

}
int main()
{
    int input = 0;
    do
    {
        menu();
        srand((unsigned int)time(NULL));
        scanf("%d",&input);
        switch (input)
        {
            case 0:
                printf("%s","游戏结束\n");
                break;
            case 1:
                printf("%s","游戏开始\n");
                game();
                break;
            default:
            {
                printf("%s","请重新输入\n");
            }
        }
    }
    while(input);
    return 0;
}
