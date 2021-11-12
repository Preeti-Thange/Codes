#include<stdio.h>

void Pattern3(unsigned int no)
{
    int iCnt=0;
    printf("\n");

    for(iCnt=1; iCnt<=no; iCnt++)
    {
        printf("%d *\t",iCnt);
    }
}
int main()
{
    unsigned int val=0;
    printf("enter number: ");
    scanf("%u",&val);
    Pattern3(val);
    return 0;
}