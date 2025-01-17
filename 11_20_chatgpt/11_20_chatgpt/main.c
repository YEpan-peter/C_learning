//
//  main.c
//  11_20_chatgpt
//
//  Created by 潘烨 on 2024/11/20.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define GRID_SIZE 5   // 网格大小（5x5）
#define NUM_MINES 5   // 地雷数量

// 全局变量
char grid[GRID_SIZE][GRID_SIZE];       // 游戏显示网格
char mines[GRID_SIZE][GRID_SIZE];      // 地雷位置

// 初始化网格
void initializeGrid() {
    for (int i = 0; i < GRID_SIZE; i++) {
        for (int j = 0; j < GRID_SIZE; j++) {
            grid[i][j] = '-';          // 显示网格用'-'表示未翻开
            mines[i][j] = '0';         // 地雷网格初始为'0'
        }
    }
}

// 随机放置地雷
void placeMines() {
    srand(time(NULL));
    int count = 0;
    while (count < NUM_MINES) {
        int x = rand() % GRID_SIZE;
        int y = rand() % GRID_SIZE;
        if (mines[x][y] != 'X') {      // 确保不重复放置地雷
            mines[x][y] = 'X';
            count++;
        }
    }
}

// 计算周围地雷数量
void calculateNumbers() {
    for (int i = 0; i < GRID_SIZE; i++) {
        for (int j = 0; j < GRID_SIZE; j++) {
            if (mines[i][j] == 'X') continue;
            int count = 0;
            for (int dx = -1; dx <= 1; dx++) {
                for (int dy = -1; dy <= 1; dy++) {
                    int ni = i + dx;
                    int nj = j + dy;
                    if (ni >= 0 && ni < GRID_SIZE && nj >= 0 && nj < GRID_SIZE && mines[ni][nj] == 'X') {
                        count++;
                    }
                }
            }
            mines[i][j] = count + '0'; // 数字转为字符存储
        }
    }
}

// 显示网格
void printGrid(char grid[GRID_SIZE][GRID_SIZE]) {
    printf("   ");
    for (int i = 0; i < GRID_SIZE; i++) printf("%d ", i);
    printf("\n");
    for (int i = 0; i < GRID_SIZE; i++) {
        printf("%d  ", i);
        for (int j = 0; j < GRID_SIZE; j++) {
            printf("%c ", grid[i][j]);
        }
        printf("\n");
    }
}

// 翻开格子
int revealCell(int x, int y) {
    if (x < 0 || x >= GRID_SIZE || y < 0 || y >= GRID_SIZE) {
        printf("无效坐标！\n");
        return 1;
    }
    if (grid[x][y] != '-') {
        printf("此格已翻开！\n");
        return 1;
    }
    if (mines[x][y] == 'X') {
        printf("你踩到地雷了！游戏结束！\n");
        return 0;
    }
    grid[x][y] = mines[x][y]; // 显示真实值
    if (grid[x][y] == '0') { // 若周围无雷，递归翻开
        for (int dx = -1; dx <= 1; dx++) {
            for (int dy = -1; dy <= 1; dy++) {
                revealCell(x + dx, y + dy);
            }
        }
    }
    return 1;
}

// 检查是否胜利
int checkWin() {
    for (int i = 0; i < GRID_SIZE; i++) {
        for (int j = 0; j < GRID_SIZE; j++) {
            if (grid[i][j] == '-' && mines[i][j] != 'X') {
                return 0; // 还有未翻开的非地雷格子
            }
        }
    }
    return 1;
}

int main() {
    initializeGrid();
    placeMines();
    calculateNumbers();

    printf("欢迎来到扫雷游戏！\n");
    int gameRunning = 1;

    while (gameRunning) {
        printGrid(grid);
        printf("请输入要翻开的坐标 (行 列)：");
        int x, y;
        scanf("%d %d", &x, &y);
        gameRunning = revealCell(x, y);
        if (checkWin()) {
            printf("恭喜你，成功清除所有地雷！\n");
            break;
        }
    }
    printf("实际地雷分布：\n");
    printGrid(mines);
    return 0;
}

