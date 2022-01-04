//count number of small and capital letters
#include<stdio.h>

void Count(char *Brr)
{
	int i=0,j=0;
	while(*Brr!='\0')
	{
		if((*Brr>='A')&&(*Brr<='Z'))
		{
			i++;
		}
		else if((*Brr>='a')&&(*Brr<='z'))
		{
			j++;
		}
		Brr++;
	}
    printf("Capital: %d\n",i);
	printf("Small: %d\n",j);
		
}
int main()
{
	char ch[20];
	
	printf("Enter the string\n");
	scanf("%[^'\n']s",ch);
	
	Count(ch);
	
	return 0;
}