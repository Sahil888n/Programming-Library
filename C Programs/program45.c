//accept n numbers and accept another number and check whether that number is present in our array
// and return its index of its first occurence
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int CheckIndex(int Arr[],int iLength,int iNum)
{
	int i=0;
	
	for(i=0;i<iLength;i++)
	{
		if(Arr[i]==iNum)
		{
			break;
		}
	}
	if(i==iLength)
	{
		return -1;
	}
	else
	{
		return i;
	}
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
	
	iRet=CheckIndex(ptr,iSize,iValue);
	if(iRet==-1)
	{
		printf("Number is not present\n");
	}
	else
	{
    	printf("Index of first appearence of %d is: %d",iValue,iRet);
	}
	
	free(ptr);
	return 0;
}

