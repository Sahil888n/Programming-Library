//return count of small letters in string
#include<stdio.h>

int CountSmall(char *Brr)
{
	int i=0;
	while(*Brr!='\0')
	{
		if((*Brr>='a')&&(*Brr<='z'))
		{
			i++;
		}
		Brr++;
	}
	return i;
		
}
int main()
{
	char ch[20];
	int iRet=0;
	
	printf("Enter the string");
	scanf("%[^'\n']s",ch);
	
	iRet=CountSmall(ch);
	printf("No of small characters is:%d",iRet);
	
	return 0;
}