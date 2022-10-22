#include "game.h"

void InitBoard(char board[ROW][COL], int row, int col)
{
    int i;
    int j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            board[i][j] = ' ';
        }
    }
}

void DisplayBoard(char board[ROW][COL], int row, int col)
{
    int i;
    int j;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf(" %c ", board[i][j]);
            if (j < col - 1)
                printf("|");
        }
        printf("\n");
        if (i < row - 1)
        {
            for (j = 0; j < col; j++)
            {
                printf("---");
                if (j < col - 1)
                    printf("|");
            }
            printf("\n");
        }
    }
}

void PlayerMove(char board[ROW][COL], int row, int col)
{
    int x;
    int y; // 接收玩家输入的坐标
    while (1)
    {
        printf("\n玩家走:>");
        scanf("%d%d", &x, &y);
        if ((x > row) || (y > col) || (x <= 0) || (y <= 0))
        {
            printf("坐标输入有误，请重新输入,e.g:1 1"); // 情况1
        }
        else if ((board[x - 1][y - 1]) != ' ')
        {
            printf("该位置已经有棋，请重新输入坐标!"); // 情况2
        }
        else
        {
            board[x - 1][y - 1] = '*';
            break;
        }
    }
}

void ComputerMove(char board[ROW][COL],int row,int col)
{
    /*int x = rand()%3;// 012
    int y = rand()%3;// 电脑下棋坐标*/ // bug -> 坐标被占用后没有产生新的坐标了，死循环了
    int x;
    int y;
    printf("\n电脑走:>\n");
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

int IsFull(char board[ROW][COL],int row,int col) // return 1 -> 棋盘满了，return 0 -> 棋盘没满
{
    int i;
    int j;
    for(i = 0;i < row;i++)
    {
        for(j = 0;j < col;j++)
        {
            if(board[i][j] == ' ')
            {
                return 0;
            }
        }
    }
    return 1;
}

char IsWin(char board[ROW][COL],int row,int col)
{
    int i;
    int j;
    // 横3行的情况
    for(i = 0;i < row;i++)
    {
        if(board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
        {
            return board[i][1];
        }
    }
    // 竖3列的情况
    for(j = 0;j < col;j++)
    {
        if(board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[1][j] != ' ')
        {
            return board[1][j];
        }
    }
    // 两种对角线的情况
    if(board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
    {
        return board[1][1];
    }
    if(board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
    {
        return board[1][1];
    }
    // 平局情况
    if(1 == IsFull(board,ROW,COL))
    {
        return 'q';
    }
    return 'c';
    
}
