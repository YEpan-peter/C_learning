//
//  main.c
//  12_3
//
//  Created by 潘烨 on 2024/12/3.
//
#include <stdio.h>

void exchange(int x,int y)
{
    int z = 0;
    z = x;
    x = y;
    y = z;
}

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    printf("交换前：a = %d b = %d\n",a,b);
    exchange(a,b);
    printf("交换后: a = %d b = %d\n",a,b);
    return 0;
}
