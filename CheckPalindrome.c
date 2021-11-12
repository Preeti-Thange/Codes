#include<stdio.h>
#include<stdbool.h>

bool CheckPalindrome(int iNo)
{
    int iDigit=0, iRev=0,iTemp=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    iTemp=iNo;
    while(iNo>0)
    {
        iDigit=iNo%10;
        iRev=(iRev*10)+iDigit;
        iNo=iNo/10;
    }
    if(iRev==iTemp)
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
    bRet=CheckPalindrome(iVal);
    if(bRet==true)
    {
        printf("Number is palindrome\n");
    }
    else
    {
        printf("Number is not palindrome\n");
    }
    return 0;
}