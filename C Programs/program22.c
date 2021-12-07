//using two counters in for loop

#include<stdio.h>

void Display(int iNo)
{
	int iCnt=0;
	int ch='\0';
	      //  1            2          3
	for(iCnt=1,ch='a';iCnt<=iNo;iCnt++,ch++)
	{
		printf("%c\t",ch);
	}
}
int main()
{
	int iVal=0;
	
	printf("Enter number");
	scanf("%d",&iVal);
	
	Display(iVal);
	return 0;
}