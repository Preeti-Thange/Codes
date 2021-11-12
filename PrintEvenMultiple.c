WRONG
#include<stdio.h>

void PrintEven(int iNo)
{
if(iNo <= 0)
{
return;
}

    for(iNo=0; iNo=iNo*2; iNo++)
    {
        if(iNo%2==0)
        {
            printf("%d",iNo);
        }
    }
}
int main()
{
int iValue = 0;
printf("Enter number\n");
scanf("%d",&iValue);
PrintEven(iValue);
return 0;
}