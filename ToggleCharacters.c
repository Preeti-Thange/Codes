#include<stdio.h>

void Toggle(char str[])
{
    if(str == NULL)
    {
        return ;
    }

    while(*str != '\0')
    {
        if((*str>='A') && (*str<='Z'))
        {
            *str = *str + 32;
        }
        else if((*str>='a') && (*str<='z'))
        {
            *str = *str - 32;       
        }
        str++;
    }    
}
int main()
{
    char Arr[10];
    printf("Enter string:  ");
    scanf("%[^'\n']s",Arr);

    Toggle(Arr);
    printf("Updated string:  %s",Arr);

    return 0;
}