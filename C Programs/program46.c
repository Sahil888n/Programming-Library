//accept n numbers and accept another number and return the last index of its appearence
//iterating loop from last index
#include<stdio.h>
#include<stdlib.h>


int CheckLastIndex(int Arr[],int iLength,int iNum)
{
	int i=0;
	
	for(i=iLength-1;i>=0;i--)
	{
		if(Arr[i]==iNum)
		{
			break;
		}
	}
	return i;
}
int main()
{
	int *ptr=NULL;
	int i=0,iSize=0,iValue=0;
    int iRet=0;
	printf("Enter the number of elements\n");
	scanf("%d",&iSize);
	
	ptr=(int*)malloc(iSize*sizeof(int));
	
	printf("Enter the %d elements below\n",iSize);
	
	for(i=0;i<iSize;i++)
	{
		scanf("%d",&ptr[i]);
	}
	printf("Enter the number you want to search:");
	scanf("%d",&iValue);
	
	iRet=CheckLastIndex(ptr,iSize,iValue);
	if(iRet==-1)
	{
		printf("The number is not present");
	}
	else
	{
   	    printf("Index of last appearence of %d is: %d",iValue,iRet);
	}
	
	free(ptr);
	return 0;
}

