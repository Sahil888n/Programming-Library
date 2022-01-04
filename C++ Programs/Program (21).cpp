#include<iostream>
using namespace std;

int CapitalI(char *Arr)
{	
	int iCnt=0;
	
	while(*Arr!='\0')
	{
		if((*Arr>='A') && (*Arr<='Z'))
		{
			iCnt++;
		}
		Arr++;
	}
	
	return iCnt;
}

int CapitalR(char *Arr)
{
	static int iCnt=0;
	
	if(*Arr!='\0')
	{
		if((*Arr>='A') && (*Arr<='Z'))
		{
			iCnt++;
		}
		Arr++;
		
		CapitalR(Arr);
	}
	
	return iCnt;
}


int main()
{
	char ch[20];
	int iRet=0;
	
	cout<<"Enter String :";
	scanf("%[^\n]s",ch);
	
	iRet=CapitalI(ch);
	cout<<"Number of Capital Letters Without Recurrsion :"<<iRet<<endl;
	
	iRet=CapitalR(ch);
	cout<<"Number of Capital Letters with Recurrsion :"<<iRet<<endl;
		
	return 0;
}