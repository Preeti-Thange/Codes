#include<stdbool.h>
#include<stdio.h>

bool CheckPerfect(int iNo)
{

    int iCnt=0;
    int iSum=0;
    if(iNo<0)
    {
        iNo =- iNo;
    }
    for(iCnt=1; iCnt<=iNo/2; iCnt++)
    {
        if((iNo%iCnt)==0)
        {
            iSum = iSum + iCnt;
        }
    }
    if(iSum==iNo)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int iVal=0;
    bool bRet;
    printf("Enter number\n");
    scanf("%d",&iVal);
    bRet=CheckPerfect(iVal);
    if(bRet==true)
    {
        printf(" %d is perfect number\n",iVal);
    }
    else
    {
         printf(" %d is not perfect number\n",iVal);      
    }
    return 0;
    }