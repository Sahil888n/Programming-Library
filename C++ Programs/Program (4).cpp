//Accept one number and check how many bits are on

#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT CountOnBit(UINT iValue)
{
	UINT iMask=0x00000001;
	UINT iResult=0;
	UINT i=0,iCnt=0;
	for(i=0;i<32;i++)
	{
		iResult=iValue & iMask;
		
		if(iResult==iMask)
		{
			iCnt++;
		}
		iMask=iMask<<1;
	}
	
	return iCnt;
}

int main()
{
	UINT iNo=0,iRet=0;
	
	cout<<"Enter the number"<<endl;
	cin>>iNo;
	
	iRet= CountOnBit(iNo);
	cout<<"The number of on bits are : "<<iRet<<endl;
	
	return 0;
}