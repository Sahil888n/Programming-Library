/* Accept number of rows and number of columns from user and display below 
pattern.
Input : iRow = 4 iCol = 4
Output :

A B C D
A # # D
A # # D
A B C D

*/

#include<iostream>
using namespace std;

class Pattern
{
	public:
	int row,col;
	
	Pattern(int num1,int num2)
	{
		this->row=num1;
		this->col=num2;
	}
	
	void PatternJ()
	{
		int i=0,j=0,temp=0;
		
		for(i=1;i<=row;i++)
		{
			char ch='A';
			for(j=1;j<=col;j++)
			{
				if((i==1) || (j==1) || (i==row) || (j==col))
				{
					cout<<ch<<"\t";
				}
				else
				{
					cout<<"#\t";
				}
				ch++;
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
	
	Pattern pobj(iRow,iCol);
	cout<<"The desired pattern is below :"<<endl;
	pobj.PatternJ();
	
	return 0;
}