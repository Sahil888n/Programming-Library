#include<stdio.h> //Header file inclusion

int Reverse(int iNo)    //Function Declaration
{
	
	int iDigit=0;
	int iRev=0;
	
    while(iNo!=0)
	{
		iDigit=iNo%10;
		printf("%d\n",iDigit);
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


	
	
	