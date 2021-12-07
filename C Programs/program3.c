#include<stdio.h>

void Display(int val)
{
	int i=0;
	for(i=1;i<=val;i++)
	{
		printf("%d\n",i);
	}
}

int main()
{
    int yo=0;
    printf("Enter the required number\n");
    scanf("%d",&yo);
    printf("The output is\n");
	Display(yo);
	
	return 0;
}