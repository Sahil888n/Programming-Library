/* Accept number of rows and number of columns from user and display below 
pattern
Input : iRow = 3 iCol = 5
Output : 
A A A A A
B B B B B
C C C C C */


#include<iostream>
using namespace std;

class Pattern
{
	public:
	int iNum1;
	int iNum2;
	
	Pattern(int iNo1,int iNo2)
	{
		this->iNum1=iNo1;
		this->iNum2=iNo2;
	}
	
	void Patternsun()
	{
		int i=0,j=0;
		char ch='A';
		
		for(i=1;i<=iNum1;i++)
		{		
			for(j=1;j<=iNum2;j++)
			{
				cout<<ch<<"\t";
			}
			
			cout<<"\n";
			ch++;
		}
	}
	
};


int main()
{
	int iRow=0,iCol=0;
	
	cout<<"Enter the number of rows :";
	cin>>iRow;
	cout<<"Enter the number of columns :";
	cin>>iCol;
	
	Pattern obj(iRow,iCol);
	obj.Patternsun();
	
	return 0;
	
}