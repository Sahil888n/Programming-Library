#include<stdio.h>

void RangeDisplayRev(int iStart, int iEnd)
{
	int i=0,iSum=0;
	
	if(iStart<0 || iEnd<0)
	{
		printf("Invalid Input");
	}
	else if(iStart>iEnd)
	{
		printf("Invalid Input");
	}
	else
	{
		for(i=iEnd;i>=iStart;i--)
		{
			printf("%d\n",i);
		}
	}
}

int main()
{
	int iValue1=0,iValue2=0;
	
	printf("Enter starting point");
	scanf("%d",&iValue1);
	
	printf("Enter ending point");
	scanf("%d",&iValue2);
	
	RangeDisplayRev(iValue1,iValue2);
		
	return 0;
}