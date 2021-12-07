#include<stdio.h> //Header file inclusion

int Reverse(int iNo)    //Function Declaration
{
	
	int iDigit=0;
	int iRev=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
    while(iNo!=0)
	{
		iDigit=iNo%10;
		iRev=(iRev*10)+iDigit;
		iNo=iNo/10;
	}
	return iRev;
}
			
int main()         //Entry point function
{
	int iValue=0;
	int iRet=0;
	
	printf("Enter the number");
	scanf("%d",&iValue);
	
	iRet=Reverse(iValue);	//Function call

    printf("The reverse number is:%d",iRet);
	
	return 0;
	
}


	
	
	