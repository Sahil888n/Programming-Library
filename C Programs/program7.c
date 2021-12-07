#include<stdio.h>
#include<stdbool.h>    //for bool datatype as it is not included in C language

bool Checkeven(int);

int main()
{
	int ino=0,iret=0;
	
    printf("Enter the number\n");
	scanf("%d",&ino);
	
	iret=Checkeven(ino);
	
	if(iret==true)
	{
	   printf("Given number is even\n");
	}else{
	   printf("Given number is not even\n"); 
	}
	
	return 0;
}

bool Checkeven(int ivalue)
{
	if((ivalue%2)==0)
	{
	return true;
	}
	else{
	return false;
	}
}