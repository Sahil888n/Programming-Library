#include<iostream>
using namespace std;

void Display(int iNo)
{
	int iCnt=1;
	while(iCnt<=iNo)
	{
		cout<<"Marvellous\n";
		iCnt++;
	}
}

void DisplayR(int iNo)
{
	static int iCnt=1;
	
	if(iCnt<=iNo)
	{
		cout<<"Marvellous\n";
		iCnt++;
		DisplayR(iNo);
	}
}

int main()
{
	DisplayR(5);
	
	return 0;
}