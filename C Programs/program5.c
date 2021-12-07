#include<stdio.h>

int Addition(int);

int main()
{
	int ino=0,iret=0;
	
    printf("Enter the number\n");
	scanf("%d",&ino);
	
	iret=Addition(ino);
	
	printf("Addition is:%d\n",iret);
	return 0;
}

int Addition(int ivalue)
{
	int isum=0;
	int icnt=0;
	
	for(icnt=1;icnt<=ivalue;icnt++)
	{
		isum=isum+icnt;
	}
	return isum;
}