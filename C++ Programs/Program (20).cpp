#include<iostream>
using namespace std;

int SumI(int Arr[],int iSize)
{
	int iSum=0,i=0;
	
	while(i<iSize)
	{
		iSum=iSum+Arr[i];
		i++;
	}
	
	return iSum;
}

int SumR(int Arr[],int iSize)
{
	static int i=0,iSum=0;
	
	if(i<iSize)
	{
		iSum=iSum+Arr[i];
		i++;
		SumR(Arr,iSize);
	}
	
	return iSum;
}


int main()
{
	int iLength=0,i=0,iRet=0;
	int *p=NULL;
	
	cout<<"Enter the Number of Elements :";
	cin>>iLength;
	
	p=new int[iLength];
	
	cout<<"Enter Elements:\n";
	
	for(i=0;i<iLength;i++)
	{
		cin>>p[i];
	}
	
	iRet=SumI(p,iLength);
	cout<<"Addition without Recurrsion: "<<iRet<<endl;
	
	iRet=SumR(p,iLength);
	cout<<"Addition with Recurrsion: "<<iRet<<endl;
	
	delete []p;
	
	return 0;
}