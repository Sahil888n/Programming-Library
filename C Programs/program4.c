#include<stdio.h>

void Display(int);


int main()
{
	int ino=0;
    printf("Enter the number\n");
	scanf("%d",&ino);
	Display(ino);
	
	return 0;
}

void Display(int ivalue)
{
	int i=0;
	for(i=ivalue;i>=1;i--)
	{
		printf("%d\n",i);
	}
}