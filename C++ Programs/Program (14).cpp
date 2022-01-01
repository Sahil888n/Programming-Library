//take number from user and swap first and last BYTE of that number

#include<iostream>
using namespace std;
typedef unsigned int UINT;

UINT SwapByte(UINT iValue)
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
	UINT iNo=0,iRet=0;
	
	cout<<"Enter the number"<<endl;
	cin>>iNo;
	
	iRet=SwapByte(iNo);	
	return 0;
}