#include <stdio.h>
#include <stdlib.h>

void my_strcpy(char* dest,char* src)
{
    while(*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}

int main()
{
    char arr1[] = "########";
    char arr2[] = "bit";
    my_strcpy(arr1,arr2);
    printf("%s\n",arr1);
    system("pause");
    return 0;
}