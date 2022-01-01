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
		printf("%d\t%c\n",i,i);
	}
}
int main()
{
	Displaytable();
}