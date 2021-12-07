#include<stdio.h> //Header file inclusion

int Counteven(int iNo)    //Function Declaration
{
	
	int iDigit=0;
	int iCnt=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	if(iNo==0)
	{
		return 1;
	}
	
    while(iNo!=0)
	{
		iDigit=iNo%10;
		if((iDigit%2)==0)
		{
			iCnt++;
		}
		iNo=iNo/10;
	}
	return iCnt;
}
			
int main()         //Entry point function
{
	int iValue=0;
	int iRet=0;
	
	printf("Enter the number");
	scanf("%d",&iValue);
	
	iRet=Counteven(iValue);	//Function call

    printf("The number of even digits are:%d",iRet);
	
	return 0;
	
}


	
	
	