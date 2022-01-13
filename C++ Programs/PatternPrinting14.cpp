/* Accept number of rows and number of columns from user and display below 
pattern.
Input : iRow = 5 iCol = 5
Output : 

# * * * *
# # * * *
# # # * *
# # # # *
# # # # #

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
	
	void PatternB()
	{
		int i=0,j=0;
		
		for(i=1;i<=row;i++)
		{
			for(j=1;j<=col;j++)
			{
				if(i>=j)
				{
					cout<<"#\t";
				}
				else
				{
					cout<<"*\t";
				}
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
	
	if(iRow==iCol)
	{
		Pattern pobj(iRow,iCol);
		cout<<"The desired pattern is below :"<<endl;
		pobj.PatternB();
	}
	else
	{
		cout<<"The number of Rows and columns are not equal"<<endl;
	}
	
	return 0;
}
	