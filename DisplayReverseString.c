#include<stdio.h>

void Display(char str[])
{
    int iCnt=0;
    if(str == NULL)
    {
        return;
    }

    while(*str != '\0')
    {
        iCnt++;
        str++;
    }
    str--;
    while(iCnt>0)
    {
        printf("%c",*str);
        iCnt--;
        str--;
    } 

    /*
    for( ;iCnt>0; iCnt--,str--)
    {
        printf("%c",*str);
    }
    */
    printf("\n");
}
int main()
{
    char Arr[10];
    printf("Enter string\n");
    scanf("%s",Arr);

    Display(Arr);
    return 0;
}