#include<stdio.h>

void Pattern3(unsigned int no)
{
    int iCnt=0;
    for(iCnt=no;iCnt>=1;iCnt--)
    {
        printf("%d *\t",iCnt);
    }
}
int main()
{
    int val=0;
    printf("Enter number\n");
    scanf("%d",&val);
    Pattern3(val);
    return 0;

}