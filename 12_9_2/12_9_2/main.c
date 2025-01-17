//
//  main.c
//  12_9_2
//
//  Created by 潘烨 on 2024/12/9.
//
//喝汽水问题
//一瓶汽水1元，两个空瓶可以兑换一瓶汽水，20元可以喝多少瓶汽水？
////写一个程序解决上面的问题
//#include <stdio.h>
//
//int main() {
//    double money = 20.0;
//    double drink = 1.0;
//    double bootle = 0.5;
//    int count = 0;
//   while(money >= 1.0)
//    {
//            money -= drink;
//            money += bootle;
//            count ++;
//    }
//    printf("剩余资金为%lf,可以喝%d瓶汽水",money,count);
//    
//    return 0;
//}
//

//在屏幕上打印一个菱形
//#include <stdio.h>
//
//int main() {
//    
//    int n;
//    // 获取用户输入
//    printf("请输入菱形的宽度（一个奇数）：");
//    while (scanf("%d", &n) != EOF)
//
//    // 检查输入是否为奇数
//    {if (n % 2 == 0) {
//        printf("宽度必须是奇数。\n");
//        return 1;
//    }
//        
//        // 打印上半部分（包括中间行）
//        for (int i = 1; i <= n; i += 2) {
//            // 打印空格
//            for (int j = 0; j < (n - i) / 2; j++) {
//                printf(" ");
//            }
//            // 打印星号
//            for (int j = 0; j < i; j++) {
//                printf("*");
//            }
//            printf("\n");
//        }
//        
//        // 打印下半部分
//        for (int i = n - 2; i >= 1; i -= 2) {
//            // 打印空格
//            for (int j = 0; j < (n - i) / 2; j++) {
//                printf(" ");
//            }
//            // 打印星号
//            for (int j = 0; j < i; j++) {
//                printf("*");
//            }
//            printf("\n");
//        }
//    }
//
//    return 0;
//}
//
//


#include <stdio.h>
 int main()
{
     for(int i = 0;i <= 1000000;i++)
     {
         
     }
     return 0;
}
