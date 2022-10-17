// ubuntu下首次Github在线编程
#include <stdio.h>
#include <stdlib.h>

void BubbleSort(int arry[],int sz)
{
  int i;
  int j;
  for(i = 0;i < sz - 1;i++) // 要比较数组元素-1趟
  {
    for(j = 0;j < sz - 1 - i;j++)// 每一趟要比较数组元素-1-趟对
    {
      if(arry[j] > arry[j+1])
      {
        int temp = arry[j];
        arry[j] = arry[j+1];
        arry[j+1] = temp;
      }
    }
  }
}

int main()
{
  int i;
  int arry[] = {10,9,8,7,6,5,4,3,2,1,0};
  int sz = sizeof(arry) / sizeof(arry[0]);
  BubbleSort(arry,sz);
  for(i = 0;i < sz;i++)
  {
   printf("%d ",arry[i]); 
  }
  return 0;
}
