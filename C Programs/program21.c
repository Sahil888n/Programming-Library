//input x and y   output x^y power function program

#include<stdio.h>

int Power(int iNo1,int iNo2)  //O(N) where N is value of iNo2
{
	int iNum=1;
	int iCnt=0;
	
    if(iNo2<0)
	{
		iNo2=-iNo2;
	}
	
/*for(iCnt=1;iCnt<=iNo2;iCnt++)
	{
		iNum=iNum*iNo1;
	}*/
	while(iCnt<iNo2)
	{
		iNum=iNum*iNo1;
		iCnt++;
	}
	return iNum;
}

int main()
{
	int iValue1=0;
	int iValue2=0;
	int iRes=0;
	
	printf("Enter the number\n");
	scanf("%d",&iValue1);
	
	printf("Enter the power\n");
	scanf("%d",&iValue2);
	
	iRes=Power(iValue1,iValue2);
	printf("The answer is:%d",iRes);
	
	return 0;
}
