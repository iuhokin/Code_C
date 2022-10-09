#include <stdio.h>
#include <stdlib.h>

int main()
{
    char input;
    int flag;
    do
    {
        printf("请输入1:继续,0退出\n");
        scanf("%d",&input);
        switch(input)
        {
            case 1:
                printf("开始游戏\n");
                flag = 1;
                break;
            case 0:
                printf("结束游戏\n");
                flag = 0;
                break;
            default:
                printf("输入错误,请重新输入\n");

                break;
        }
    }while(input);
    system("pause");
    return 0;
}