#include<stdio.h>  //Header file inclusion

void Display();    //Function Declaration

int main()         //Entry point function
{
	Display();      //Function call
	return 0;
	
}

void Display()     //Function definition
{
    int iNo=7521;
	int iDigit=0;
	
	while(iNo!=0)
	{
		iDigit=iNo%10;
	    printf("%d\n",iDigit); //1
	    iNo=iNo/10; 
	}
	
}
	
	
	
	