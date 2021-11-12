#include<stdio.h>

int Display(char str[])
{
    int iCnt=0;
    for(iCnt=0; str[iCnt]!='\0'; iCnt++)
    {
        printf("%c\n",str[iCnt]);
    }
}

int main()
{
    char Arr[10],ret=0;
    printf("Enter your name\n");
    fgets(Arr,10,stdin);

    ret=Display(Arr);
    
    return 0;
}