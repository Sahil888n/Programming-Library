//Accept one number and position and toggle the bit at that position

#include<iostream>
typedef unsigned int UINT;
using namespace std;

UINT ToggleBit(UINT iValue,UINT iPos)
{
	UINT iMask=0X00000001; //Syntax of Hexadecimal number
	
	if((iPos<1) || (iPos>32))
	{
		return 0;
	}
	
	UINT iResult=0;
	iMask=iMask<<(iPos-1);
	
	iResult=iValue ^ iMask;
	
	
	return iResult;
}

int main()
{
	UINT iNo1=0,iNo2=0,iRet=0;
	cout<<"Enter the Number"<<endl;
	cin>>iNo1;
	
	cout<<"Enter the Position"<<endl;
	cin>>iNo2;
	
	iRet=ToggleBit(iNo1,iNo2);
	
	cout<<"Number after Swapping given position is: "<<iRet<<endl;
	return 0;
}