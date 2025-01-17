//
//  main.c
//  11_26
//
//  Created by 潘烨 on 2024/11/26.
//
//
//#include <stdio.h>
//
//int main() {
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    while (scanf("%d %d %d",&a,&b,&c)!=EOF) {
//    if ((a+b>c)&&(a+c>b)&&(c+b>a)) {
//        if ((a == b)&&(b ==c)) {
//        printf("Equilateral triangle!\n");
//        }
//        else if ((a==b)||(a==c)||(b==c)) {
//        printf("Isosceles triangle!\n");
//        }
//        else{
//            printf("Ordinary triangle!\n");
//        }
//    }
//    else{
//        printf("Not a triangle!\n");
//    }
//    }
//   
//    return 0;
//}
//}


//#include <stdio.h>
//
//
//int main()
//{
//    for(int i = 100;i <= 200;i++)
//    {
//        int flag = 0;
//        for(int p = 2;p < i;p++ )
//        {
//            if (i%p == 0) {
//                flag ++;
//                break;
//            }
//            
//        }
//        if(flag == 0)
//        {
//            printf("%d ",i);
//        }
//    }
//    
//    return 0;
//}



//#include<stdio.h>
//
//int main()
//{
//    for(int i = 1;i <= 9;i++)
//    {
//        for(int j = 1;j <= i;j++)
//        {
//            if(i == j)
//            {
//                printf("%d*%d = %d\n",j,i,i*j);
//            }
//            else{
//                printf("%d*%d = %d ",j,i,i*j);
//            }
//        }
//    }
//    return 0;
//}


//
//#include<stdio.h>
//
//void Process(char ch[20][20],int x)
//{
//    for(int i = 0;i < x;i++)
//    {
//        for(int j = 0;j < x;j++)
//        {
//            if(i == j)
//            {
//                ch[i][j] = '*';
//            }
//            else if((i+j) ==(x-1))
//            {
//                ch[i][j] = '*';
//            }
//            else{
//                ch[i][j] = ' ';
//            }
//        }
//    }
//}
//
//void Print(char ch[20][20],int x)
//{
//    for(int i = 0;i < x;i++)
//    {
//        for(int j = 0;j < x;j++)
//        {
//            printf("%c",ch[i][j]);
//        }
//        printf("\n");
//    }
//}
//
//int main()
//{
//    int a ;
//    while(scanf("%d",&a)!= EOF){
//        char ch[20][20] ={0};
//        Process(ch,a);
//        Print(ch,a);
//    }
//    return 0;
//}

//#include <stdio.h>
//
//int main() {
//    int n;
//
//    // 循环读取多组输入
//    while (scanf("%d", &n) != EOF) {
//        if (n < 3 || n > 20) {
//            printf("Invalid input! Please enter a number between 3 and 20.\n");
//            continue;
//        }
//
//        // 定义二维数组
//        char square[n][n];
//
//        // 填充二维数组
//        for (int i = 0; i < n; i++) {
//            for (int j = 0; j < n; j++) {
//                // 判断是否是边界
//                if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
//                    square[i][j] = '*'; // 边界填充 '*'
//                } else {
//                    square[i][j] = ' '; // 非边界填充空格
//                }
//            }
//        }
//
//        // 打印二维数组
//        for (int i = 0; i < n; i++) {
//            for (int j = 0; j < n; j++) {
//                printf("%c ", square[i][j]); // 每个字符后加一个空格
//            }
//            printf("\n"); // 换行
//        }
//    }
//
//    return 0;
//}
//
//#include <stdio.h>
//
//int main() {
//    int n;
//
//    // 循环读取多组输入
//    while (scanf("%d", &n) != EOF) {
//        if (n < 3 || n > 20) {
//            printf("Invalid input! Please enter a number between 3 and 20.\n");
//            continue;
//        }
//
//        // 打印空心正方形
//        for (int i = 0; i < n; i++) {
//            for (int j = 0; j < n; j++) {
//                // 如果是边界位置，打印 '*'
//                if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
//                    printf("* ");
//                } else { // 非边界位置打印空格
//                    printf("  ");
//                }
//            }
//            printf("\n"); // 换行
//        }
//    }
//
//    return 0;
//}
//
//
//
//#include<stdio.h>
//
//void Input(int ch[10][10],int m,int n)
//{
//    for(int i = 0;i < m;i++)
//        for(int j = 0;j < n;j++)
//        {
//            scanf("%d",&ch[i][j]);
//        }
//}
//
//void Process(int ch1[10][10],int ch2[10][10],int m,int n)
//{
//    for(int i = 0;i < m;i++)
//        for(int j = 0;j < n;j++)
//        {
//            ch2[j][i] = ch1[i][j];
//        }
//}
//
//void Print(int ch2[10][10],int m,int n)
//{
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            printf("%d ",ch2[i][j]);
//        }
//        printf("\n");
//            }
//}
//int main ()
//{
//    int m,n;
//    int ch1[10][10];
//    int ch2[10][10];
//    while(scanf("%d %d",&m,&n) != EOF)
//    {
//        Input(ch1,m,n);//输入数组
//        Process(ch1,ch2,m,n);//处理数组
//        Print(ch2,m,n);//打印数组
//    }
//    
//    return 0;
//}


//#include<stdio.h>
//
//int main()
//{
//    int ch[10];
//    for(int i = 0;i < 10;i++)
//    {
//        scanf("%d",&ch[i]);
//    }
//    for(int i = 9;i >= 0;i--)
//    {
//        printf("%d ",ch[i]);
//    }
//    return 0;




//#include<stdio.h>
//
//int main()
//{
//    int sum;
//    double average;
//    int ch[10];
//    for(int i = 0;i < 10;i++)
//    {
//        scanf("%d",&ch[i]);
//    }
//    for(int i = 0;i < 10;i++)
//    {
//        sum += ch[i];
//    }
//    average = sum/10.0;
//    printf("%lf",average);
//    return 0;
//}

//
//#include<stdio.h>
//
//int main()
//{
//    int a[10],b[10],c[10];
//    for(int i = 0;i < 10;i++)
//    {
//        c[i] = a[i];
//        a[i] = b[i];
//        b[i] = c[i];
//    }
//    return 0;
////}
//#include <stdio.h>
//
//void mergeArrays(int arr1[], int n, int arr2[], int m, int result[]) {
//    int i = 0, j = 0, k = 0;
//
//    // 合并两个数组
//    while (i < n && j < m) {
//        if (arr1[i] < arr2[j]) {
//            result[k++] = arr1[i++];
//        } else {
//            result[k++] = arr2[j++];
//        }
//    }
//
//    // 处理剩余元素
//    while (i < n) {
//        result[k++] = arr1[i++];
//    }
//    while (j < m) {
//        result[k++] = arr2[j++];
//    }
//}
//
//int main() {
//    int n, m;
//
//    // 读取数组长度
//    scanf("%d %d", &n, &m);
//
//    int arr1[n], arr2[m], result[n + m];//使用变长数组
//
//    // 读取第一个数组
//    for (int i = 0; i < n; i++) {
//        scanf("%d", &arr1[i]);
//    }
//
//    // 读取第二个数组
//    for (int i = 0; i < m; i++) {
//        scanf("%d", &arr2[i]);
//    }
//
//    // 合并两个数组
//    mergeArrays(arr1, n, arr2, m, result);
//
//    // 打印合并后的数组
//    for (int i = 0; i < n + m; i++) {
//        printf("%d ", result[i]);
//    }
//    printf("\n");
//
//    return 0;
//}
