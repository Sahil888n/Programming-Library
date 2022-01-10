#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT iValue,UINT iPos)
{
	UINT iMask=0X00000001;
	UINT iResult=0;
	
	if((iPos<1) || (iPos>32))
	{
		return false;
	}
	
	iMask=iMask<<(iPos-1);
	
	iResult=iValue & iMask;
	
	if(iResult==iMask)
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
	UINT iNo=0,iBit=0;
	bool bRet=false;
	
	printf("Enter the number\n");
	scanf("%d",&iNo);
	
	printf("Enter position\n");
	scanf("%d",&iBit);
	bRet=CheckBit(iNo,iBit);
	if(bRet==true)
	{
		printf("Bit is ON\n");
	}
	else
	{ 
        printf("The bit is Off\n");
	}
	return 0;
}