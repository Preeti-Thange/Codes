#include<stdio.h>

void Pattern1(unsigned int no)
{
    int iCnt=0;
    printf("\n");
    for(iCnt=1; iCnt<=no; iCnt++)
    {
        printf("* \t");
    }
    printf("\n");
}
int main()
{
    unsigned int val=0;
    printf("Enter number: \n");
    scanf("%u",&val);
    Pattern1(val);

    return 0;
}