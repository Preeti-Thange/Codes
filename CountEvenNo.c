#include<stdbool.h>
int CountEven(int iNo)
{
    int iDigit=0,iCnt=0;
    if(iNo<=0)
    {
        iNo=-iNo;
    }
    while(iNo>0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2) == 0)
        {
            iCnt++;
        }
        iNo = iNo /10;
    }
    return iCnt;
}
int main()
{
    int iVal=0;
    int iRet=0;
    printf("Enter the number\n");
    scanf("%d",&iVal);
    iRet=CountEven(iVal);
    printf("Count of even number is %d",iRet);
    return 0;
}