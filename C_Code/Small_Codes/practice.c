// 2022/10/30
//  #include <stdio.h>
//  #include <stdlib.h>

// int main()
// {
//     int* p;
//     *p = 20;
//     system("pause");
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     int arry[10] = {1,2,3,4,5,6,7,8,9,10};
//     int* p = &arry[9];
//     int i;
//     for(i = 0;i < 10;i++)
//     {
//         //printf("%d ",*(p+i));
//         printf("%d ",*p);
//         p-=1;
//     }
//     printf("\n");
//     system("pause");
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     int i;
//     int arry[10] = {1,2,3,4,5,6,7,8,9,10};
//     for(i = 0;i < 10;i++)
//{
//     printf("%p\n",&arry[i]);
//     }
//     printf("%d\n",&arry[9]-&arry[0]);
//     printf("%p\n",&arry[9]-&arry[0]);
//     system("pause");
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// void Init(int arry[], int numSize)
// {
//     int i;
//     for (i = 0; i < numSize; i++)
//     {
//         arry[i] = 0;
//     }
// }

// void print(int arry[], int numSize)
// {
//     int i;
//     for (i = 0; i < numSize; i++)
//     {
//         printf("%d ", arry[i]);
//     }
// }

// void Reverse(int arry[], int numSize)
// {
//     int left = 0;
//     int right = numSize - 1;

//     while (left <= right)
//     {
//         int temp;
//         temp = arry[right];
//         arry[right] = arry[left];
//         arry[left] = temp;
//         left++;
//         right--;
//         if (left > right)
//         {
//             break;
//         }
//     }
// }

// int main()
// {
//     int arry[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     int numSize = sizeof(arry) / sizeof(arry[0]);
//     int i;
//     // Init(arry,numSize);
//     print(arry, numSize);
//     printf("\n");
//     Reverse(arry, numSize);
//     print(arry, numSize);
//     printf("\n");
//     system("pause");
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//  int arr1[] = {-8,1,4,6,9,100};
//  int arr2[] = {-100,-8,0,1,2,6,8,109};
//  int sz1 = sizeof(arr1) / sizeof(arr1[0]);
//  int sz2 = sizeof(arr2) / sizeof(arr2[0]);
//  int* p3 = (int*)malloc(sizeof(int) * (sz1 + sz2));
//  if (p3 == NULL)
//  {
//   perror(" ");
//   return 0;
//  }
//  int i1 = 0;
//  int i2 = 0;
//  int i = 0;
//  while (i1 < sz1 && i2 < sz2)
//  {
//   if (arr1[i1] < arr2[i2])
//   {
//    p3[i] = arr1[i1];
//    i++;
//    i1++;
//   }
//   else
//   {
//    p3[i] = arr2[i2];
//    i2++;
//    i++;
//   }
//  }
//  if (i1 == sz1)
//  {
//   int j = 0;
//   for (j = i2; j < sz2 ; j++)
//   {
//    p3[i] = arr2[j];
//    i++;
//   }
//  }
//  if (i2 == sz2)
//  {
//   int j = 0;
//   for (j = i1; j < sz1; j++)
//   {
//    p3[i] = arr1[j];
//    i++;
//   }
//  }

//  for (i = 0; i < sz1+sz2; i++)
//  {
//   printf("%d ",p3[i]);
//  }
//  free(p3);
//  p3 = NULL;
//  system("pause");
//  return 0;
// }

