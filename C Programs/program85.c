#include<stdio.h>

void Pattern(int iNo)
{
	int iCnt=0;
	int iSum=0;
	
	
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		iSum=iSum+2;
		printf("%d\t",iSum);		
	}
}
int main()
{
	int iValue=0;
	
	printf("Enter number of elements");
	scanf("%d",&iValue);
	
	Pattern(iValue);
	
	return 0;
}