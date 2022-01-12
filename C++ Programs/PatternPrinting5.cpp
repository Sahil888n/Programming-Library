/* Accept number of rows and number of columns from user and display below 
pattern
Input : iRow = 3 iCol = 4
Output : 
1 2 3 4
5 6 7 8
9 10 11 12 */


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
	
	void Patternmun()
	{
		int i=0,j=0,temp=1;
		
		
		for(i=1;i<=iNum1;i++)
		{		
			for(j=1;j<=iNum2;j++)
			{
				cout<<temp<<"\t";
				temp++;
			}
			
			cout<<"\n";
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
	obj.Patternmun();
	
	return 0;
	
}