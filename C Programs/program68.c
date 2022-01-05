//check if string is palindrome or not (string and its reverse should be same)
#include<stdio.h>
#include<stdbool.h>

bool CheckPalindrome(char *str)
{
	char *start=NULL;
	char *end=NULL;
	start=str;
	end=str;
	while(*end!='\0')
	{
		end++;
	}
	end--;
	while(start<end)                  
	{                                
		if(*start!=*end)                
		{
			break;
		}
		start++;
		end--;
	}
	if(start>end)
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
	char Arr[30];
	bool bRet=false;
	
	printf("Enter string\n");
	scanf("%[^'\n']s",Arr);
	
	bRet=CheckPalindrome(Arr);
	if(bRet==true)
	{
		printf("String is pallindrome\n");
	}
	else
	{
		printf("String is not pallindrome\n");
	}
	return 0;
}	