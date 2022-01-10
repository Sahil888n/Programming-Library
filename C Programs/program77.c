#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

bool CheckBit(UINT iValue)
{
	UINT iMask=0X00100000;
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
	
	printf("Enter the number\n");
	scanf("%d",&iNo);
	
	bRet=CheckBit(iNo);
	if(bRet==true)
	{
		printf("21th Bit is On\n");
	}
	else
	{ 
        printf("21th bit is Off\n");
	}