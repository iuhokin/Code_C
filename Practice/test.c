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
}

void test()
{
    int input;
    do
    {
        menu();
        printf("\n请输入:>");
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
                printf("输入有误请重新输入!\n");
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