#include<stdio.h>

void StrUpr(char str[])
{
    if(str == NULL)
    {
        return ;
    }
    while(*str != '\0')
    {
        if((*str>='a') && (*str <='z'))
        {
             *str = *str - 32;
        }
        str++;
    }
}
int main()
{
    char Arr[10];
    
    printf("Enter string: ");
    scanf("%[^'\n']s",Arr);

    StrUpr(Arr);
    printf("Updated string is: %s",Arr);

    return 0;
}