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

//2022/10/31

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//  int arr1[] = { 1,2,5,6,3 };
//  int sz1 = sizeof(arr1) / sizeof(arr1[0]);
//  int ret = 1235;
//  int n = ret;
//  int sz2 = 0;
//  while (n)
//  {
//   sz2++;
//   n /= 10;
//  }
//  if (sz1 > sz2)
//  {
//   int i1 = sz1 - 1;
//   int* p = (int*)malloc(sizeof(int) * (sz1 + 1));
//   int j = 0;
//   for (j = 0; j < sz1 + 1; j++)
//   {
//    p[j] = 0;
//   }
//   if (p == NULL)
//   {
//    perror(" ");
//    return 0;
//   }
//   int m = 0;
//   int i = 0;
//   int a = sz1;
//   while (a)
//   {
//    int num = arr1[i1] + (ret % 10) + m;
//    if (num > 9)
//    {
//     num -= 10;
//     p[i]=num;
//     i++;
//     m = 1;
//     i1--;
//     ret /= 10;

//    }
//    else
//    {
//     m = 0;
//     p[i]=num;
//     i++;
//     i1--;
//     ret /= 10;
//    }
//    a--;
//   }
//   if (p[i] != 0)
//   {
//    while (i>=0)
//    {
//     printf("%d", p[i]);
//     i--;
//    }
//   }
//   else
//   {
//    while (i-1>=0)
//    {
//     printf("%d", p[i-1]);
//     i--;
//    }
//   }
//   free(p);
//   p = NULL;

//  }
//  else
//  {
//   int i2 = sz1 - 1;
//   int* p = (int*)malloc(sizeof(int) * (sz2 + 1));
//   int j = 0;
//   for (j = 0; j < sz2+1; j++)
//   {
//    p[j] = 0;
//   }
//   if (p == NULL)
//   {
//    perror(" ");
//    return 0;
//   }
//   int m = 0;
//   int i = 0;
//   int a = sz2;
//   int num = 0;
//   while (a)
//   {
//    if (i2 < 0)
//     num = 0 + (ret % 10) + m;
//    else
//     num = arr1[i2] + (ret % 10) + m;
//    if (num > 9)
//    {
//     num -= 10;
//     p[i] = num;
//     i++;
//     m = 1;
//     i2--;
//     ret /= 10;

//    }
//    else
//    {
//     m = 0;
//     p[i] = num;
//     i++;
//     i2--;
//     ret /= 10;
//    }
//    a--;
//   }
//   if (p[i] != 0)
//   {
//    while (i >= 0)
//    {
//     printf("%d", p[i]);
//     i--;
//    }
//   }
//   else
//   {
//    while (i - 1 >= 0)
//    {
//     printf("%d", p[i - 1]);
//     i--;
//    }
//   }
//   free(p);
//   p = NULL;
//  }
//  system("pause");
//  return 0;
// }



// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//  printf("%d", printf("%d", printf("%d", 43)));
//  system("pause");
//  return 0;
// }

//2022/11/01

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     int a = 4;
//     int b = 2;
//     int c = 3;
//     int d;
//     d = (++a,b,c);
//     printf("%d",d);
//     printf("%d",a);
//     system("pause");
//     return 0;
// }

// 2022/11/02

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     int num;
//     int i;
//     int count;
//     printf("请输入一个整数:>");
//     scanf("%d",&num);
//     while(num)
//     {
//         if((num % 2)==1)
//         {
//             count++;
//         }
//         num /= 2;
//     }
//     printf("二进制中1的个数为:%d",count);
//     system("pause");
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     int num;
//     int i;
//     int count = 0;
//     printf("请输入一个整数:>");
//     scanf("%d",&num);
//     for(i = 0;i < 32;i++)
//     {
//         if(1 == ((num >> i) & 1))
//         {
//             count++;
//         }
//     }
//     printf("二进制中1的个数为:%d\n",count);
//     system("pause");
//     return 0;
// }

//method1
// #include <stdio.h>
// #include <stdlib.h>

// void swap(int n,int m)
// {
//     int temp;
//     temp = n;
//     n = m;
//     m = temp;
//     printf("%d %d",n,m);
// }

// int main()
// {
//     int n;
//     int m;
//     printf("请输入两个整数:>");
//     scanf("%d%d",&n,&m);
//     swap(n,m);
//     system("pause");
//     return 0;
// }

//method2
// #include <stdio.h>
// #include <stdlib.h>

// void swap(int n,int m)
// {
//     n = n + m;
//     m = n - m;
//     n = n - m;
//     printf("%d %d",n,m);
// }

// int main()
// {
//     int n;
//     int m;
//     printf("请输入两个整数:>");
//     scanf("%d%d",&n,&m);
//     swap(n,m);
//     system("pause");
//     return 0;
// }

//method3
// #include <stdio.h>
// #include <stdlib.h>

// void swap(int n,int m)
// {
//     n = n ^ m;
//     m = n ^ m;
//     n = n ^ m;
//     printf("%d %d",n,m);
// }

// int main()
// {
//     int n;
//     int m;
//     printf("请输入两个整数:>");
//     scanf("%d%d",&n,&m);
//     swap(n,m);
//     system("pause");
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     int a = 3;
//     int b = 3;
//     (a = 0) && (b = 5);
//     printf("a = %d,b = %d\n",a,b); // 0,3
    
//     (a = 1) || (b = 5);
//     printf("a = %d,b = %d\n",a,b); //1 3
//     system("pause");
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// void print(int* p,int sz)
// {
//     int i;
//     for(i = 0;i < sz;i++)
//     {
//         printf("%d ",*(p + i));
//     }
// }

// int main()
// {
//     int arry[] = {1,2,3,4,5,6,7,8,9};
//     int sz = sizeof(arry) / sizeof(arry[0]);
//     print(arry,sz);
//     system("pause");
//     return 0;
// }

// 2022/11/03
// #include <stdio.h>
// #include <stdlib.h>

// void print(int num)
// {
//     if(num > 9)
//     {
//         print(num/10);
//     }
//     printf("%d ",num % 10);
// }

// int main()
// {
//     int num;
//     printf("请输入一个整数:>");
//     scanf("%d",&num);
//     print(num);
//     system("pause");
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// struct S
// {
//     int a;
//     char ch[20];
//     char* p;
// };

// struct P
// {
//     double a;
//     char str[20];
//     struct S p;
// };

// int main()
// {
//     char arry[] = "hello world";
//     struct S s = {1234,"hehe",arry};
//     struct P p = {3.14,"hehe world",{100,"haha world",arry+1}};
//     printf("%s\n",s.ch); // hehe
//     printf("%s\n",s.p); // hello world
//     printf("%s\n",p.p.p);//ello world
//     printf("%s\n",p.str);//hehe world
//     printf("%s\n",p.p.ch);//haha,world
//     system("pause");
//     return 0;
// } 

// 2022/11/04
#include <stdio.h>
#include <stdlib.h>

typedef struct Stu
{
    char name[20];
    int age;
    char address[20];
}Stu;

void print(Stu temp)
{
    printf("%s\n",temp.name);
    printf("%s\n",temp.address);
    printf("%d\n",temp.age);
}

void print2(Stu* temp)
{
    printf("%s\n",temp->name);
    printf("%s\n",temp->address);
    printf("%d\n",temp->age);
}

int main()
{
    Stu s = {"Mike",20,"GuangDong"};
    print(s);
    print2(&s);
    system("pause");
    return 0;
}




