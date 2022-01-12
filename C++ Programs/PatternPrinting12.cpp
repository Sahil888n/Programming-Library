/* Accept number of rows and number of columns from user and display below 
pattern.
Input : iRow = 4 iCol = 4
Output : 
* 2 3 4
5 * 7 8
9 10 * 12
13 14 15 *
*/

#include<iostream>
using namespace std;

class Pattern
{
	public:
		
	void Patternfun(int iNum1,int iNum2)
	{
		int i=0,j=0,temp=1;
		
		for(i=1;i<=iNum1;i++)
		{	
			for(j=1;j<=iNum2;j++)
			{
				if(i==j)
				{
					cout<<"*\t";
				}
				else
				{
					cout<<temp<<"\t";
				}
				
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
	
	if(iRow!=iCol)
	{
		cout<<"Invalid number of rows or columns";
	}
	else
	{
		Pattern obj;
		obj.Patternfun(iRow,iCol);
	}
	
	return 0;
	
}
	