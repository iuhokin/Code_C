// void qsort(void* base,seze_t num,size_t width,int(*cmp)(const void *e1,const void *e2));
#include <stdio.h>
#include <stdlib.h>

int cmp_float(const void*e1,const void*e2)
{
    if(*(float*)e1 == *(float*)e2)
    {
        return 0;
    }
    else if(*(float*)e1 > *(float*)e2)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

int cmp_int(const void*e1,const void*e2)
{
    return (*(int*)e1 - *(int*)e2);
}

void TestInt()
{
    int arry[] = {1,4,7,8,5,2,9,6,3,0,10};
    int sz = sizeof(arry) / sizeof(arry[0]);
    printf("排序前:");
    int i;
    for(i = 0;i < sz;i++)
    {
        printf("%d ",arry[i]);
    }
    qsort(arry,sz,sizeof(arry[0]),cmp_int);
    printf("\n排序后:");
    for(i = 0;i < sz;i++)
    {
        printf("%d ",arry[i]);
    }
}

void TestFloat()
{
    float arry[] = {};
}

int main()
{
    TestInt();
    TestFloat();
    system("pause");
    return 0;
}