#include<stdio.h>

void RangeDisplay(int iStart, int iEnd)
{
	int i=0;
	
	for(i=iStart;i<=iEnd;i++)
	{
		printf("%d\n",i);
	}
}

int main()
{
	int iValue1=0,iValue2=0;
	
	printf("Enter starting point");
	scanf("%d",&iValue1);
	
	printf("Enter ending point");
	scanf("%d",&iValue2);
	
	RangeDisplay(iValue1,iValue2);
	return 0;
}