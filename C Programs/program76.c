#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT iValue)
{
	UINT iMask=0x00000008;
	UINT iResult=0;
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
	UINT iNo=0;
	bool bRet=false;
	printf("Enter Dicimal number\n");
	scanf("%d",&iNo);
	bRet=CheckBit(iNo);
	if(bRet==true)
	{
		printf("4th bit is ON\n");
	}
	else
	{
		printf("4th bit is OFF\n");
	}
	
	return 0;
}
