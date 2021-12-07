#include<stdio.h>
    
void DisplayFactors(int);

int main()
{
	int ino=0;
	
    printf("Enter the number\n");
	scanf("%d",&ino);
	
	DisplayFactors(ino);     //the function has no return value so no need of iret 
	
	return 0;
}

void DisplayFactors(int iValue)
{
    int iCnt=0;
	
	if(iValue<0)
	{
		iValue=-iValue;
	}

for(iCnt=1;iCnt<iValue;iCnt++)
{	
	if((iValue%iCnt)==0)
	{
	printf("%d\n",iCnt);
	}
}	
	
}