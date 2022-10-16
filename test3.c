#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int arry[] = {1,2,3,4,5,6,7,8,9,10};
    int len = sizeof(arry) / sizeof(arry[0]);
    for(i = 0;i < len;i++)
    {
        printf("&arry[%d] = %p\n",i,&arry[i]);
    }
    system("pause");
    return 0;
}