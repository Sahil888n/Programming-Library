#include<stdio.h>
#include<stdbool.h>
bool CheckDigit(char c)
{
	if((c>='0')&&(c<='9'))  //if((c>=48)&&(c<=57)) by using ASCII value Avoid using it
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	char ch='\0';
	bool bRet=false;
	
	printf("Enter character\n");
	scanf("%c",&ch);
	
	bRet=CheckDigit(ch);
	if(bRet==true)
	{
		printf("It is Digit");
	}
	else
	{
		printf("It is not Digit");
	}
	return 0;
}