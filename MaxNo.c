#include<stdio.h>
int MaxNo(int iNo1,int iNo2)
{
    int max=0,iDigit=0;
    if(iNo1>iNo2)
    {
    printf("%d is greater",iNo1);
    }
    else
    {
        printf("%d is greater",iNo2);
    }
}
int main()
{
    int val1=0,val2=0,res=0;
    printf("enter the 1st number: \n");
    scanf("%d",&val1);
 
    printf("enter the 2nd number: \n");
    scanf("%d",&val2);

    res=MaxNo(val1,val2);
    return 0;
}
/*
    
*/
