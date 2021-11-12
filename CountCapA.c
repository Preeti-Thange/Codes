#include<stdio.h>

int CountCapA(char str[])
{
    int iCnt=0;
    if(str == NULL)
    {
        return 0;
    }
    while(*str[] != '\0')
    {
        if((*str>='A') && (*str<='Z'))
        {
            iCnt++;
        }
        str++;
    }
}
int main()
{
    char Arr[10];
    int ret=0;

    printf("Enter string\n");
    scanf("%[^'\n']s",Arr);

    ret=CountCapA(Arr);
    printf("Number of capital characters are: \n",ret);

    return 0;
}