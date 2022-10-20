#include "game.h"

void InitBoard(char board[ROW][COL],int row,int col)
{
    int i;
    int j;
    for(i = 0;i < row;i++)
    {
        for(j = 0;j < col;j++)
        {
            board[i][j] = ' ';
        }
    }
}

void DisplayBoard(char board[ROW][COL],int row,int col)
{
    int i;
    int j;
    for(i = 0;i < row;i++)
    {
        for(j = 0;j < col;j++)// 重复动作:空格|(空格|)(空格) P15 41:48
        {
            printf(" %c ",board[i][j]);
            if(j < col - 1)
                printf("|");
        }
        printf("\n");
        /*if(i < row - 1)
            printf("---|---|---\n");*/ //非动态生成，只支持3*3棋盘
        
        if(i < row - 1)
        {
            for(j = 0;j < col;j++)
            {
                printf("---");
                if(j < col - 1)
                    printf("|");
            }
            printf("\n");
        }
        
    }
}

void PlayerMove(char board[ROW][COL],int row,int col)
{
    int x;
    int y;
    while(1)
    {
        printf("请输入要下的坐标:>");
        scanf("%d%d",&x,&y);
        if(x >= 1 && x <= row && y >= 1 && y <= col)
        {
            if((board[x-1][y-1]) == ' ')
            {
                board[x-1][y-1] = '*';
                break;
            }
            else
            {
                printf("该坐标已被占用,请重新输入\n");
            }
        }
        else
        {
            printf("输入坐标有误,请重新输入!e.g:1 1\n");
        }
    }
}

void ComputerMove(char board[ROW][COL],int row,int col)
{
    int x;
    int y;
    printf("电脑下棋:>\n");
    while(1)
    {
        x = rand() % row;
        y = rand() % col;
        if(board[x][y] == ' ')
        {
            board[x][y] = '#';
            break;
        }
    }
}