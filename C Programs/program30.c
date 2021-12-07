#include<stdio.h>

int Addition(int Brr[])  //int Addition(int *Brr)
{
	int i=0,iSum=0;
	for(i=0;i<5;i++)
	{
		iSum=iSum+Brr[i];
	}
	return iSum;
}

int main()
{
	int Arr[5];
	int iRet=0;
	
	printf("Enter the numbers\n");
	int i=0;
	
	for(i=0;i<5;i++)
	{
		scanf("%d",&Arr[i]);
	}
	iRet=Addition(Arr);    //iRet=Addition(100)  where 100 is address of array Arr
	printf("Addition is:%d",iRet);
	return 0;
}