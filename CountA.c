#include<stdio.h>

int CountA(char str[])
{
    int iCnt=0;

    while(*str!='\0')
    {
        if(*str == 'a')
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[10];
    int ret=0;

    printf("Enter string:\n");
    scanf("%[^'\n']s",Arr);

    ret=CountA(Arr);
    printf("Number of A character in given string is : %d\n",ret);

    return 0;
}