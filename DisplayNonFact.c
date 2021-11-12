#include<stdio.h>

int EvenFact(int iNo)
{
    int i=0;
    int iMult=1;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(i=1;i<=iNo;i++)
    {
        if((iNo%i)==0){}
        else{
            printf("%d\n",i);
        }
    }
}
int main()
{
    int iValue=0;
    printf("Enter the number\n");
    scanf("%d",&iValue);
    EvenFact(iValue);

    return 0;
}