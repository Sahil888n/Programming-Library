#include<stdio.h>

int RangeSumEven(int iStart, int iEnd)
{
	int i=0,iSum=0;
	
	if(iStart<0 || iEnd<0)
	{
		return 0;
	}
	if(iStart>iEnd)
	{
		return 0;
	}
	
	for(i=iStart;i<=iEnd;i++)
	{
		if((i%2)==0)
		{
			iSum=iSum+i;
		}
	}
	return iSum;
}

int main()
{
	int iValue1=0,iValue2=0,iRet=0;
	
	printf("Enter starting point");
	scanf("%d",&iValue1);
	
	printf("Enter ending point");
	scanf("%d",&iValue2);
	
	iRet=RangeSumEven(iValue1,iValue2);
	
	if(iRet==0)
	{
		printf("Invalid Input");
	}
	else
	{
		printf("Addition is:%d",iRet);
	}
	
	return 0;
}