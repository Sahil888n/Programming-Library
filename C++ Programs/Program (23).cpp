#include<iostream>
#include<stdio.h>

using namespace std;

int CountCapR(char *ch)
{
	static int iCnt=0;
	
	if(*ch!='\0')
	{
		if((*ch>='A') && (*ch<='Z'))
		{
			iCnt++;
		}
		ch++;
		CountCapR(ch);
	}
	
	return iCnt;
}
int main()
{
	char Arr[20];
	int iRet=0;
	
	cout<<"Enyter String :";
	scanf("%[^\n]s",Arr);
	
	iRet=CountCapR(Arr);
	
	cout<<"Capital :"<<iRet<<endl;
	
	return 0;
}