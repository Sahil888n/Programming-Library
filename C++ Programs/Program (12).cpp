//toggle the bits from one position to another position(even more simplified than program196)

#include<iostream>
using namespace std;
typedef unsigned int UINT;

UINT ToggleBits(UINT iValue,UINT iPos1,UINT iPos2)
{	
	return (iNo ^ ( (0xffffffff << (iPos1-1) ) & (0xffffffff >> (32-iPos2) ) ));
}

int main()
{
	UINT iNo=0,iVal1=0,iVal2=0,iRet=0;
	
	cout<<"Enter the number"<<endl;
	cin>>iNo;
	
	cout<<"Enter the starting position"<<endl;
	cin>>iVal1;
	
	cout<<"Enter the end position"<<endl;
	cin>>iVal2;
	
	iRet=ToggleBits(iNo,iVal1,iVal2);
	cout<<"Number after toggling is : "<<iRet<<endl;
	
	return 0;
}