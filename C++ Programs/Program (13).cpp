//take number from user and separate each byte of it and show the separated bytes individually

#include<iostream>
using namespace std;
typedef unsigned int UINT;

void DisplayByte(UINT iValue)
{	
    UINT iMask=0x000000ff,iResult=0,i=0;
	
	for(i=1;i<=4;i++)
	{
		iResult=iValue & iMask;
		cout<<"Byte "<<i<<" is "<<iResult<<endl;
		iValue=iValue >> 8;
	}
}

int main()
{
	UINT iNo=0,iVal1=0,iVal2=0,iRet=0;
	
	cout<<"Enter the number"<<endl;
	cin>>iNo;
	
	DisplayByte(iNo);	
	return 0;
}