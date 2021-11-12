#include<stdio.h>

void StrLwr(char str[])
{
    if(str == NULL)
    {
        return ;
    }
    while(*str != '\0')
    {
        if((*str>='A')&&(*str<='Z'))
        {
            *str = *str + 32;
        }
        str++;
    }
}
int main()
{
    char Arr[10];
    int ret =0;

    printf("Enter the string:  ");
    scanf("%[^'\n']s",Arr);

    StrLwr(Arr);
    printf("Updated string is:  %s\n",Arr);

    return 0;
}