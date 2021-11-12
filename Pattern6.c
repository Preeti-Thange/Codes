#include<stdio.h>

void Pattern6(unsigned int no)
{
    int iCnt=0;
    char ch='A';

    for(iCnt=1; iCnt<=no; iCnt++)
    {
        printf("%c\t",ch);
        ch++;
    }
}
int main()
{
    unsigned int val=0;
    //char cVal='\0';

    printf("Enter number\n");
    scanf("%u",&val);

    Pattern6(val);

    return 0;
}