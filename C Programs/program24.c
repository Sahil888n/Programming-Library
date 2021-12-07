#include<stdio.h>

void Display(int iRow,int iCol)
{
	int i=0,j=0;
	
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
			printf("%d\t",i);
		}
		printf("\n");
	}
}
      
int main()
{
	int iVal1=0,iVal2=0;
	
	printf("Enter number of rows");
	scanf("%d",&iVal1);
	
	printf("Enter number of columns");
	scanf("%d",&iVal2);
	
	Display(iVal1,iVal2);
	return 0;
}