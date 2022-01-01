#include<stdio.h>
#include<stdbool.h>
bool CheckSmall(char c)
{
	if((c>='a')&&(c<='z'))  //if((c>=97)&&(c<=122)) by using ASCII Avoid using it
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
	
	bRet=CheckSmall(ch);
	if(bRet==true)
	{
		printf("It is Small");
	}
	else
	{
		printf("It is not Small");
	}
	return 0;
}