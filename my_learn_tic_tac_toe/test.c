#include "game.h"

void menu()
{
    printf("******** 1.play 0.exit ********");
}

void game()
{
    char board[ROW][COL];
    InitBoard(board,ROW,COL);
    DisplayBoard(board,ROW,COL);
    while(1)
    {
        PlayerMove(board,ROW,COL);
        DisplayBoard(board,ROW,COL);
        ComputerMove(board,ROW,COL);
        DisplayBoard(board,ROW,COL);
    }
}

void test()
{
    int input;
    do
    {
        srand((unsigned int) time(NULL));
        menu();
        printf("\n请选择:>");
        scanf("%d",&input);
        switch(input)
        {
            case 1:
                game();
                break;
            case 0:
                printf("退出游戏!\n");
                break;
            default:
                printf("输入有误,请重新输入!\n");
                break;
        }
    }while(input);
}

int main()
{
    test();
    system("pause");
    return 0;
}