#include <stdio.h>
#include <stdlib.h>
/* 顺序查找(效率低)，最坏情况n次
int main()
{
    int n;
    int i;
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    printf("请输入你要查找的数字N>:\n");
    scanf("%d",&n);
    int szlong = sizeof(arr) / sizeof(arr[0]);
    for(i = 0;i < szlong;i++)
    {
        if(n == arr[i])
        {
            printf("该元素找到了,下标为:%d\n",i);
            break;
        }
    }
    if(szlong == i)
    {
        printf("该元素不在数组里面\n");
    }
    system("pause");
    return 0;
}
*/

// 二分查找,最坏情况，log2n次

int main()
{
    int n;
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int left = 0;
    int szlong = sizeof(arr) / sizeof(arr[0]);
    int right = szlong - 1;
    printf("请输入你要查找的元素>:\n");
    scanf("%d",&n);
    while(left <= right)
    {
        int mid = (left + right) / 2;
        if(arr[mid] > n)
        {
            right = mid - 1;
        }
        else if(arr[mid] < n)
        {
            left = mid + 1;
        }
        else
        {
            printf("找到了,该元素下标为:%d\n",mid);
            break;
        }
    }
    if(left > right)
    {
        printf("该元素不在里面,无法被找到!");
    }
    system("pause");
    return 0;
}