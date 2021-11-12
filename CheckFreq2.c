#include<stdio.h>

int Frequency(int ino)
{
    int iCnt=0,iDigit=0;
    if(ino<0)
    {
        ino = -ino;
    }
    while(ino>0)
    {
        iDigit = ino%10;
        if(iDigit==2)
        {
            iCnt++;
        }
        ino=ino/10;
    }
    return iCnt;
}
int main()
{
    int value=0, iRet=0;
    printf("Enter number\n");
    scanf("%d",&value);

    iRet=Frequency(value);
    printf("Frrquency of 2 is: %d",iRet);
    return 0;
}