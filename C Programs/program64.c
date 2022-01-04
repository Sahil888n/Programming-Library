//count the number of spaces betn string
#include<stdio.h>

int SpaceCount(char *Brr)
{
	int i=0;
	while(*Brr!='\0')
	{
		if(*Brr==' ') 
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
	
	printf("Enter the string\n");
	scanf("%[^'\n']s",ch);
	
	iRet=SpaceCount(ch);
	printf("Spacecount is: %d\n",iRet);	
	
	return 0;
}