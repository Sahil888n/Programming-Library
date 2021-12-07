#include<stdio.h>  //Header file inclusion

int Display(int);    //Function Declaration

int main()         //Entry point function
{
	int iValue=0;
	int iRet=0;
	
	printf("Enter the number");
	scanf("%d",&iValue);
	
	iRet=Display(iValue);	//Function call
	printf("Addition of digits :%d",iRet);
	
	return 0;
	
}

int Display(int iNo)     //Function definition
{
	int iDigit=0;
	int iSum=0;
	
	while(iNo!=0)
	{
		iDigit=iNo%10;
	    iSum=iSum+iDigit; //1
	    iNo=iNo/10; 
	}
	
	return iSum;
}
	
	
	
	