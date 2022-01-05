//accept string and accept a character and return freq of that character in our string

#include<stdio.h>

int CountFrequency(char *brr,char ch)
{
	int iCnt=0;
	if(brr==NULL)
	{
		return -1;
	}
	while(*brr!='\0')
	{
		if(*brr==ch)
		{
			iCnt++;
		}
		brr++;
	}
	return iCnt;
}
int main()
{
	char str[20];
	char cChar='\0';
	int iRet=0;
	printf("Enter the string\n");
	scanf("%[^'\n']s",str);  //in this syntax(not until enter) when we press enter it ignores second
	                         //scanf bcoz enter is inside input buffer so when we go to next scanf
                             // compiler will think we have pressed enter and it skips it  							 
	printf("Enter the character\n"); //so when we enter space enter will be removed from our input buffer
	scanf(" %c",&cChar); //space before %c is important
	
	iRet=CountFrequency(str,cChar);
	printf("Frequency of %c is : %d",cChar,iRet);
	return 0;
}