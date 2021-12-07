/*  iRow=5,iCol=5

*
**
***
****
*****
*/
#include<stdio.h>

void Display(int iRow,int iCol)
{
	int i=0,j=0;
	
	if(iRow!=iCol)  //We will use this condition if we want to diagonal elements
	{
		return;
	}
	
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
			if(i>=j)
			{
				printf("*\t");
			}
			
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