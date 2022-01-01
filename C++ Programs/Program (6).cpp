//Accept two positions from user and toggle the bits at those positions

#include<iostream>
using namespace std;
typedef unsigned int UINT;

UINT ToggleBit(UINT iValue,UINT iPos1,UINT iPos2)
{
	UINT iMask1=0x00000001,iMask2=0x00000001,iResult=0;

	iMask1=iMask1<<(iPos1-1);
	iMask2=iMask2<<(iPos2-1);
	
	iResult=iValue ^ iMask1;
	iResult=iResult ^ iMask2;
	
	//Another method
	//iMask1=iMask1 | iMask2;
	//iResult=iValue ^ iMask1;
	
	return iResult;
}

int main()
{
	UINT iNo=0,iRet=0,iNum1=0,iNum2=0;
	
	cout<<"Enter the number"<<endl;
	cin>>iNo;
	
	cout<<"Enter the first position"<<endl;
	cin>>iNum1;
	
	cout<<"Enter the second position"<<endl;
	cin>>iNum2;
	
	iRet=ToggleBit(iNo,iNum1,iNum2);
	cout<<"The number after toggling is "<<iRet<<endl;
	
	return 0;
}