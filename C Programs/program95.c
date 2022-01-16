#include<stdio.h>

void Pattern(int iRow,int iCol)
{
	int i=0,j=0;
	char ch='A';
	int iDisp=1;
	
	for(i=1;i<=iRow;i++)
	{	
		for(j=1;j<=iCol;j++)
		{
			printf("%d\t",iDisp);
			iDisp++;
		}		
		
		printf("\n");
	}
}
int main()
{
	int iValue1=0,iValue2=0;
	
	printf("Enter the number of rows and columns");
	scanf("%d%d",&iValue1,&iValue2);
	
	Pattern(iValue1,iValue2);
	
	return 0;
}