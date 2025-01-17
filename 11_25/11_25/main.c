//
//  main.c
//  11_25
//
//  Created by 潘烨 on 2024/11/25.
//
//
//#include <stdio.h>
//
//void In(int ch[10]) {
//    for (int i = 0; i < 10; i++)
//    {
//        scanf("%d", &ch[i]);
//    }
//}
//
//int Compair(int ch[])
//{
//    int r = ch[0];
//    for (int i = 1; i < 10; i++) // 从索引1开始比较
//    {
//        if (r < ch[i])
//        {
//            r = ch[i];
//        }
//    }
//    return r;
//}
//
//int main() {
//    int ch[10] = {0}; // 用int数组存储整数
//    printf("请依次输入10个整数\n");
//    In(ch);//输入
//    int Max = Compair(ch);//比较
//    printf("十个整数中最大的是：%d\n", Max);
//
//    return 0;
//}



//
//#include <stdio.h>
//
//int main()
//{
//    double sum = 0.0;
//    int sign = 1;
//    for(int i = 1;i <= 100;i++)
//    {
//        sum += sign*(1.0/i);
//        sign = -sign;
//    }
//    printf("结果是：%.10lf\n",sum);
//    return 0;
//}
//


//#include <stdio.h>
//
//int main()
//{
//    int count = 0;
//    for(int i = 1;i <= 100;i++)
//    {
//        if (i/10 == 9) {
//            count++;
//        }
//        if (i%10 == 9)
//        {
//            count++;
//        }
//    }
//    printf("1～100中数字9出现的次数为：%d\n",count);
//}


//#include <stdio.h>
//
//int main()
//{
//    printf("1000～2000年之间的闰年有：\n");
//    for (int i = 1000; i <= 2000; i += 4) {
//        if((i%100 == 0)&&(i%400 != 0))
//            continue;
//        printf("%d ",i);
//    }
//    
//    return 0;
//}


#include<stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    printf("请输入两个整数\n");
    scanf("%d %d",&a,&b);
    for (int i = a; i > 0; i--) {
        if ((b%i == 0)&&(a%i == 0)) {
            printf("这两个数的最大公约数为：%d\n",i);
            break;
        }
    }
    return 0;
}
