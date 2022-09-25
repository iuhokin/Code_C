#include <stdio.h>
#include <stdlib.h>

int LargeValues(int x , int y)
{   
    int max;
    max = (x > y) ? x : y;
    printf("较大的数为:%d\n\n",max);
    return 0;
}

int main()
{
    int num1;
    int num2;
    printf("请输入两个整数:\n");
    scanf("%d %d",&num1,&num2);
    LargeValues(num1,num2);
    system("pause");
    return 0;
}