#include<stdio.h>
#include<stdbool.h>

bool CheckBit(int iValue)
{
	int iMask=0x00000008;
	int iResult=0;
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
	int iNo=0;
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
