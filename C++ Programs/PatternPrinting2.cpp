/* Accept number of rows and number of columns from user and display below 
pattern.
Input : iRow = 4 iCol = 4
Output : 
A B C D
a b c d
A B C D
a b c d */

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
	
	void Patterngun()
	{
		int i=0,j=0;
		
		for(i=1;i<=iNum1;i++)
		{
			char ch1='A',ch2='a';
			
			if((i%2)==0)
			{
				for(j=1;j<=iNum2;j++)
				{
					cout<<ch2<<"\t";
					ch2++;
				}
			}
			else
			{
				for(j=1;j<=iNum2;j++)
				{
					cout<<ch1<<"\t";
					ch1++;
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
	
	Pattern obj(iRow,iCol);
	obj.Patterngun();
	
	return 0;
	
}