//Accept n numbers from user and show even numbers

#include<stdio.h>
#include<stdlib.h>

int Even(int Arr[],int iLength)
{
	int i=0,iCnt=0;
	for(i=0;i<iLength;i++)
	{
		if((Arr[i]%2)==0)
		{
			iCnt++;
		}
	}
	return iCnt;
}
int main()
{
	int *ptr=NULL;
	int i=0,iSize=0;
    int iRet=0.0;
	printf("Enter the number of elements\n");
	scanf("%d",&iSize);
	
	ptr=(int*)malloc(iSize*sizeof(int));
	
	printf("Enter the %d elements below\n",iSize);
	
	for(i=0;i<iSize;i++)
	{
		scanf("%d",&ptr[i]);
	}
	iRet=Even(ptr,iSize);
	printf("The number of Even elememts are: %d",iRet);
	free(ptr);
	return 0;
}

