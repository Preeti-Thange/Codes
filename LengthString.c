#include<stdio.h>

int StrLen(char str[])
{
    int iCnt=0;

    while(*str!=0)
    {
        printf("%d  :  %c\n",iCnt,*str);
        iCnt++;
        str++;
    }
    return iCnt;
}

int main()
{

    char Arr[10];
    int ret=0;
    printf("Enter string\n");
    scanf("%[^'\n']s",Arr);

    ret=StrLen(Arr);
    printf("String length is: %d\n",ret);

    return 0;
}