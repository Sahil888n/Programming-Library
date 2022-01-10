#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT iValue)
{
	UINT iMask=0X0000000f;
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
		printf("1st, 2nd, 3rd, 4th Bit are On\n");
	}
	else
	{ 
        printf("The bits are Off\n");
	}
	return 0;
}