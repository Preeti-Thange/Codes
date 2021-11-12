#include<stdio.h>

void Pattern5(unsigned int no,char ch)
{
    int iCnt=0;
    for(iCnt=1; iCnt<=no; iCnt++)
    {
        printf("%c\t",ch);
    }
}
int main()
{
    unsigned int val=0;
    char cVal= '\0';

    printf("Enter number\n");
    scanf("%u",&val);

    printf("Enter character\n");
    scanf(" %c",&cVal);

    Pattern5(val,cVal);
    return 0;
}