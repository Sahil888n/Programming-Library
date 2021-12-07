#include<stdio.h> //Header file inclusion

int AddEven(int iNo)    //Function Declaration
{
	
	int iDigit=0;
	int iSumeven=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
    while(iNo!=0)
	{
		iDigit=iNo%10;
		if((iDigit%2)==0)
		{
			iSumeven=iSumeven+iDigit;
		}
		iNo=iNo/10;
	}
	return iSumeven;
}
			
int main()         //Entry point function
{
	int iValue=0;
	int iRet=0;
	
	printf("Enter the number");
	scanf("%d",&iValue);
	
	iRet=AddEven(iValue);	//Function call

    printf("The Addition of even numbers is:%d",iRet);
	
	return 0;
	
}


	
	
	