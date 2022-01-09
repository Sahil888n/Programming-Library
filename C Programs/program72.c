//program to reverse string
#include<stdio.h>

void StrRevX(char *ch)
{
	char *end=ch;
	char temp;
	
	while(*end!='\0')
	{
		end++;
	}
	end--;
	
	while(ch<end)
	{
		temp=*ch;
		*ch=*end;
		*end=temp;
		
		end--;
		ch++;
	}
}
int main()
{
	char str[20];
	
	printf("Enter the string\n");
	scanf("%[^'\n']s",str);
	
	StrRevX(str);
	printf("Reverse string is: %s",str);
	return 0;
}