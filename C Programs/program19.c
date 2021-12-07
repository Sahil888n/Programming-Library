//Program for perfect number with two functions

#include<stdio.h>
#include<stdbool.h>

int Perfect(int iNo)
{
	int iFact=0;
	//int iTemp=iNo;
	int i=0;
	
	if(iNo<0)
	{
		return false;
	}
	
	for(i=1;i<=(iNo/2);i++) //iNo/2 is used so that we can reduce the time complexity by halving the number of inputs
	{
		if((iNo%i)==0)
		{
			iFact=iFact+i;
		}
	}
	
	if(iFact==iNo)
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

	