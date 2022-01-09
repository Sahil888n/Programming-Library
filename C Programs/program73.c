#include<stdio.h>

void DisplayBinary(int iValue)
{
	int iDigit=0;
	while(iValue!=0)
	{
		iDigit=iValue%2;
		printf("%d\t",iDigit);
		iValue=iValue/2;
	}
}
int main()
{
	int iNo=0;
	printf("Enter Dicimal number\n");
	scanf("%d",&iNo);
	
	DisplayBinary(iNo);
	return 0;
}
