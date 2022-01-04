//count no of vowels in the string (a,e,i,o,u)
//The program is case sensitive as it only works for small letters
#include<stdio.h>

int CountVowel(char *ch)
{
	int iCnt=0;
	if(ch==NULL)
	{
		return -1;
	}
	while(*ch!='\0')
	{
		if((*ch=='a') || (*ch=='e') || (*ch=='i') || (*ch=='o') || (*ch=='u'))
		{
			iCnt++;
		}
		ch++;
	}
	return iCnt;
}
int main()
{
	char str[20];
	int iRet=0;
	printf("Enter the string\n");
	scanf("%[^'\n']s",str);
	
	iRet=CountVowel(str);
	printf("The number of vowels in the above string: %d",iRet);
	return 0;
}