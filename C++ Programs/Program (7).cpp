//Accept number from user and toggle the last 4 bits and first 4 bits of the number

#include<iostream>
using namespace std;
typedef unsigned int UINT;

UINT ToggleBits(UINT iValue)
{
	UINT iMask=0xf000000f,iResult=0;
	
	iResult=iValue ^ iMask;
	
	return iResult;
}

int main()
{
	UINT iNo=0,iRet=0;
	
	cout<<"Enter the number"<<endl;
	cin>>iNo;
	
	iRet=ToggleBits(iNo);
	cout<<"The number after toggling is "<<iRet<<endl;
	
	return 0;
}