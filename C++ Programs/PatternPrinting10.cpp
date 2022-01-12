/* Accept number of rows and number of columns from user and display below 
pattern.
Input : iRow = 4 iCol = 4
Output : 
* # * #
* # * #
* # * #
* # * # 
*/

#include<iostream>
using namespace std;

class Pattern
{
	public:
		
	void Patternfun(int iNum1,int iNum2)
	{
		int i=0,j=0;
		
		for(i=1;i<=iNum1;i++)
		{	
			for(j=1;j<=iNum2;j++)
			{
				if((j%2)==0)
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
	
	Pattern obj;
	obj.Patternfun(iRow,iCol);
	
	return 0;
	
}
	