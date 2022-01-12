/* Accept number of rows and number of columns from user and display below 
pattern
Input : iRow = 4 iCol = 5
Output : 
4 4 4 4 4
3 3 3 3 3
2 2 2 2 2
1 1 1 1 1 */


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
	
	void Patternrun()
	{
		int i=0,j=0,temp=0;
		temp=iNum1;
		
		
		for(i=1;i<=iNum1;i++)
		{		
			for(j=1;j<=iNum2;j++)
			{
				cout<<temp<<"\t";
			}
			
			cout<<"\n";
			temp--;
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
	obj.Patternrun();
	
	return 0;
	
}