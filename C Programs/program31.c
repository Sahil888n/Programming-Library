#include<stdio.h>
#include<stdlib.h>

int Addition(int Brr[],int iNo)  //int Addition(int *Brr)
{
	int i=0,iSum=0;
	for(i=0;i<iNo;i++)
	{
		iSum=iSum+Brr[i];
	}
	return iSum;
}

int main()
{
	int *Arr=NULL;
	int iRet=0,iCnt=0,iLength=0;
	
	printf("Enter number of elements\n");
	scanf("%d",&iLength);
	
	Arr=(int*)malloc(iLength*sizeof(int));
		
	printf("Enter the numbers\n");
	int i=0;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		scanf("%d",&Arr[iCnt]);
	}
	iRet=Addition(Arr,iLength);    //iRet=Addition(100)  where 100 is address of array Arr
	printf("Addition is:%d",iRet);
	
	free(Arr);
	
	return 0;
}