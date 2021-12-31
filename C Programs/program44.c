//accept n numbers and accept another number and check whether that number is present in our array
//without using boolean bRes
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckNum(int Arr[],int iLength,int iNum)
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
		return false;
	}
	else
	{
		return true;
	}
}
int main()
{
	int *ptr=NULL;
	int i=0,iSize=0,iValue=0;
    bool bRet=0;
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
	
	bRet=CheckNum(ptr,iSize,iValue);
	
	if(bRet==true)
	{
		printf("The number is present\n");
	}
	else
	{
		printf("The number is absent\n");
	}
	
	free(ptr);
	return 0;
}

