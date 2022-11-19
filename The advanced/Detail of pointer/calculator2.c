// 妙
#include <stdio.h>
#include <stdlib.h>

int Add(int x,int y)
{
    int z;
    z = x + y;
    return z;
}

int Sub(int x,int y)
{
    int z;
    z = x - y;
    return z;
}

int Mul(int x,int y)
{
    int z;
    z = x * y;
    return z;
}

int Div(int x,int y)
{
    int z;
    z = x / y;
    return z;
}

void menu()
{
    printf("*******************\n");
    printf("*** 1.add 2.sub ***\n");
    printf("*** 3.mul 4.div ***\n");
    printf("***    0.exit   ***\n");
    printf("*******************\n");
}

int main()
{
    int input;
    int x;
    int y;
    int (*pfArr[5])(int,int) = {0,Add,Sub,Mul,Div};
    do
    {
        menu();
        printf("请选择:>");
        scanf("%d",&input);
        if(input >= 1 && input <= 4)
        {
            printf("请输入两个操作数:>");
            scanf("%d%d",&x,&y);
            printf("%d\n",pfArr[input](x,y));
        }
        else if(input == 0)
        {
            printf("退出!\n");
        }
        else
        {
            printf("输入有误,请重新输入!\n");
        }
    }while(input);
    system("pause");
    return 0;
}