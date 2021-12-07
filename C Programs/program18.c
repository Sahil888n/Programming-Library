//Program for perfect number with three functions

#include<stdio.h>
#include<stdbool.h>

int Factsum(int iNo)
{
	int iFact=0;
	int i=0;
	
	if(iNo<0)
	{
		iNo=-iNo;
	}
	          
	for(i=1;i<=(iNo/2);i++) //iNo/2 is used so that we can reduce the time complexity by halving the number of inputs
	{
		if((iNo%i)==0)
		{
			iFact=iFact+i;
		}
	}
	return iFact;
}

int Perfect(int iNo)
{
	int iPer=0;
	
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	iPer=Factsum(iNo);
	
	if(iPer==iNo)
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
	bool bRet=false;
	
	printf("Enter the Number\n");
	scanf("%d",&iValue);
	
	bRet=Perfect(iValue);
	
	if(bRet==true)
	{
		printf("The given number is a perfect number\n");
	}
	else
	{
		printf("The given number is not the perfect number\n");
	}
	
	return 0;
}

	