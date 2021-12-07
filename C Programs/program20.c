//Program to display the table of given number

#include<stdio.h>

void DisplayTable(int iNo)
{
	int iNum=0;
	int i=0;
	
	if(iNo<0)
	{
		iNo=-iNo;
	}
	else if(iNo==0)
	{
		return;     //We did'nt write anything after return because return type of function is void
	}
	
	for(i=1;i<=10;i++)
	{
		iNum=iNo*i;
		printf("%d\n",iNum);
	}
}

int main()
{
	int iValue=0;
	
	printf("Enter number");
	scanf("%d",&iValue);
	
	DisplayTable(iValue);
	return 0;
}
	