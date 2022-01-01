#include<stdio.h>

char SmalltoCapital(char c)
{
	if((c>='a')&&(c<='z'))  //if((c>=48)&&(c<=57)) by using ASCII value Avoid using it
	{
		return c-32; //diff betn ASCII Values of small and capital letters is 32 
	}
}

int main()
{
	char ch='\0';
	char cRet='\0';
	
	printf("Enter character\n");
	scanf("%c",&ch);
	
	cRet=SmalltoCapital(ch);
	printf("Capital letter is: %c\n",cRet);
	
	return 0;
}