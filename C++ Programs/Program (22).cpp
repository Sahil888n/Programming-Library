#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
	char Arr[20];
	int iRet=0;
	
	cout<<"Enyter String :";
	scanf("%[^\n]s",Arr);
	
	iRet=CountCapI(Arr);
	
	cout<<"Capital :"<<iRet<<endl;
	
	return 0;
}