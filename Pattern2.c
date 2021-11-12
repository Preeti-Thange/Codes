#include<stdio.h>

void Pattern2(unsigned int no)
{
    int iCnt=0;
    for(iCnt=1; iCnt<=no; iCnt++)
    {
        printf("*#\t");
    }
}
int main()
{
    int val=0;
    printf("enter number: \n");
    scanf("%d",&val);
    Pattern2(val);

    return 0;
}