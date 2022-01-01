#include<stdio.h>

void Displaytable()
{
	int i=0;
	printf("ASCII Table is \n");
	printf("**************************\n");
	printf("Decimal\tCharacter\n");
	printf("**************************\n");
	
	for(i=0;i<=127;i++)
	{
		printf("%d\t%x\t%o\t%c\n",i,i,i,i);
	}
}


int main()
{
	Displaytable();
}