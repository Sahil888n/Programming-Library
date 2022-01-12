/* Accept number of rows and number of columns from user and display below 
pattern.
Input : iRow = 4 iCol = 4
Output : 
* * * *
* * * *
* * * *
* * * * 
*/

#include<iostream>
using namespace std;

class Pattern
{
	public:
		
	void Patternfun(int iNum1,int iNum2)
	{
		int i=0,j=0;
		
		for(i=0;i<iNum1;i++)
		{	
			for(j=0;j<iNum2;j++)
			{
				cout<<"*\t";
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
	
	Pattern obj;
	obj.Patternfun(iRow,iCol);
	
	return 0;
	
}
	