#include<stdio.h>
#include<stdbool.h>

bool CheckDivisible(int iNo)
{
	if(((iNo%3)==0) && ((iNo%5)==0))
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
	int iValue=0;
	bool bRet;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	bRet=CheckDivisible(iValue);
	
	if(bRet==true)
	{
		printf("The number is divisible by 3 & 5");
	}
	else
	{
		printf("The number not is divisible by 3 & 5");
	}
	
	return 0;
}
