#include<stdio.h>

int main()
{
	char Arr[30];
	printf("Enter your name\n");
	scanf("%[^'\n']s",Arr);
	
	printf("Your entered name is :%s\n",Arr);
	return 0;
	
}