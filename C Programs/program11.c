#include<stdio.h>  //Header file inclusion

int Display(int);    //Function Declaration

int main()         //Entry point function
{
	int iValue=0;
	int iRet=0;
	
	printf("Enter the number");
	scanf("%d",&iValue);
	
	iRet=Countdigit(iValue);	//Function call
	printf("The number of Digits are:%d",iRet);
	
	return 0;
	
}

int Countdigit(int iNo)     //Function definition
{
	int iDigit=0;
	int iCnt=0;
	
	while(iNo!=0)
	{
		iDigit=iNo%10;
	    iCnt++; //1
	    iNo=iNo/10; 
	}
	return iCnt;
	
}
	
	
	
	