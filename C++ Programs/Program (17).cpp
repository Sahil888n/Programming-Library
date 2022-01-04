//Accept number from user and return Addtion of digits using Recurrsion

#include<iostream>
using namespace std;

int DigitSumI(int iValue)
{
	int iTemp=0;
	while(iValue!=0)
	{
		iTemp=iTemp+(iValue%10);
		iValue=iValue/10;
	}
	
	return iTemp;
}

int DigitSumR(int iValue)
{
	static int iTemp=0;
	
	if(iValue!=0)
	{
		iTemp=iTemp+(iValue%10);
		iValue=iValue/10;
		DigitSumR(iValue);
	}
	
	return iTemp;
}
	
	
int main()
{
	int iNo=0,iRet=0;
	
	cout<<"Enter the Number :";
	cin>>iNo;
	
	iRet=DigitSumI(iNo);
	cout<<"Without Recurrsion :"<<iRet<<endl;
	
	iRet=DigitSumR(iNo);
	cout<<"With Recurrsion :"<<iRet<<endl;
	
	return 0;
}