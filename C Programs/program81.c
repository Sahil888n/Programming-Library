#include<stdio.h>

void Pattern(int iNo)
{
	int iCnt=0;
	char alpha='A';
	
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		
		printf("%c\t",alpha);
		alpha++;
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