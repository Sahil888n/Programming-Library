#include<stdio.h>

char CapitaltoSmall(char c)
{
	if((c>='A')&&(c<='Z'))  //if((c>=48)&&(c<=57)) by using ASCII value Avoid using it
	{
		return c+32; //diff betn ASCII Values of small and capital letters is 32 
	}
}

int main()
{
	char ch='\0';
	char cRet='\0';
	
	printf("Enter character\n");
	scanf("%c",&ch);
	
	cRet=CapitaltoSmall(ch);
	printf("Small letter is: %c\n",cRet);
	
	return 0;
}