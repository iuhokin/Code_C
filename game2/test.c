#include "game.h"

void menu()
{
    printf("******** 1.play 0.exit ********");
}

void game()
{
    
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
                printf("开始游戏!\n");
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