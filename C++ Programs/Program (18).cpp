#include<iostream>
using namespace std;

int FactorialI(int iVal)
{
	int iNo=1;
	while(iVal!=0)
	{
		iNo=iNo*iVal;
		iVal--;
	}
	
	return iNo;
}

int FactorialR(int iVal)
{
	static int iNo=1;
	
	if(iVal!=0)
	{
		iNo=iNo*iVal;
		iVal--;
		FactorialR(iVal);
	}
	
	return iNo;
}

int main()
{
	int iFact=0,iRet=0;
	
	cout<<"Enter the Number :";
	cin>>iFact;
	
	iRet=FactorialI(iFact);
	cout<<"Without Recurrsion :"<<iRet<<endl;
	
	iRet=FactorialR(iFact);
	cout<<"With Recurrsion :"<<iRet<<endl;
	
	return 0;
}