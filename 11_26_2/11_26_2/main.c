//
//  main.c
//  11_26_2
//
//  Created by 潘烨 on 2024/11/26.
//

//#include <stdio.h>
//
//// 二分查找函数
//int bin_search(int arr[], int left, int right, int key) {
//    while (left <= right) {
//        int mid = left + (right - left) / 2; // 避免溢出
//        if (arr[mid] == key) {
//            return mid; // 找到目标值，返回下标
//        } else if (arr[mid] < key) {
//            left = mid + 1; // 在右半部分继续查找
//        } else {
//            right = mid - 1; // 在左半部分继续查找
//        }
//    }
//    return -1; // 未找到目标值
//}
//
//int main() {
//    int arr[] = {1, 3, 5, 7, 9, 11, 13};
//    int n = sizeof(arr) / sizeof(arr[0]);
//    int key = 2;
//
//    int result = bin_search(arr, 0, n - 1, key);
//    if (result != -1) {
//        printf("元素 %d 的下标是: %d\n", key, result);
//    } else {
//        printf("元素 %d 未找到\n", key);
//    }
//
//    return 0;
//}
//
//
//#include<stdio.h>
//
//void Print(int x)
//{
//    for(int i = 1;i <= x;i++)
//    {
//        for(int j = 1;j <= i;j++)
//        {
//            printf("%d*%d=%d ",j,i,j*i);
//        }
//        printf("\n");
//    }
//}
//
//int main()
//{
//    int n = 0;
//    scanf("%d",&n);
//    Print(n);
//}


//#include<stdio.h>
//
//void IfRunYear(int year)
//{
//    if ((year%4==0)&&(year%100!=0)||(year%400==0)) {
//        printf("%d年是闰年\n",year);
//    }
//    else
//    {
//        printf("%d年不是闰年\n",year);
//    }
//}
//
//
//int main()
//{
//    int year = 0;
//    while(scanf("%d",&year)!=EOF)
//    {
//        IfRunYear(year);
//    }
//    return 0;
//    }

//
//#include<stdio.h>
//
//int if_prime(int x)
//{
//    int flag = 0;
//    for(int i = 2;i < x;i++)
//    {
//        if(x%i == 0)
//        {
//            flag++;
//            break;
//        }
//    }
//    if(flag == 0)
//    {
//        return 1;
//    }
//    else{
//        return 0;
//    }
//}
//
//int main()
//{
//    for(int i = 100;i <= 200;i++)
//    {
//       if(if_prime(i))
//       {
//           printf("%d ",i);
//       }
//    }
//    return 0;
//}



#include<stdio.h>

void init(int ch[],int n){
    for(int i = 0;i < n;i++)
    {
        ch[i] = 0;
    }
}

void print(int ch[],int n){
    for(int i = 0;i < n;i++)
    {
        printf("%d ",ch[i]);
    }
    printf("\n");
}

void reverse(int ch[],int n){
    int ch2[n];
    for(int i = 0;i < n;i++)
    {
        ch2[i] = ch[i];
    }
    for(int i = 0;i < n;i++){
        ch[i] = ch2[n - 1 - i];
    }
}

int main()
{
    int ch[10];
    init(ch,10);
    print(ch,10);
    reverse(ch,10);
}
