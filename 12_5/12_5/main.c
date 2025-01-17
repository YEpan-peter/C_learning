//
//  main.c
//  12_5
//
//  Created by 潘烨 on 2024/12/5.
//

#include <stdio.h>

int main() {
    int arr[3][5] = {{1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7}};
    printf("%d",*(arr[2]+1));
    return 0;
}
