#include<stdio.h>

int DecFact(int iNo)
{
    int i=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(i=iNo/2; i>0; i--)
    {
        if(iNo%i==0)
        {
            printf("%d\n",i);
        }
    }
}
int main()
{
    int iValue=0;
    printf("Enter the number\n");
    scanf("%d",&iValue);
    DecFact(iValue);

    return 0;
}