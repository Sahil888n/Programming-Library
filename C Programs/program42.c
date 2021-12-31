//Accept n numbers and return the difference between largest number and smallest number
#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[],int iLength)
{
	int i=0,iMin=Arr[i],iMax=Arr[i];
	
	for(i=0;i<iLength;i++)
	{
		if(iMin>=Arr[i])
		{
			iMin=Arr[i];
		}
		else if(iMax<=Arr[i])
		{
			iMax=Arr[i];
		}
	}
	return iMax-iMin;
}
int main()
{
	int *ptr=NULL;
	int i=0,iSize=0;
    int iRet=0;
	printf("Enter the number of elements\n");
	scanf("%d",&iSize);
	
	ptr=(int*)malloc(iSize*sizeof(int));
	
	printf("Enter the %d elements below\n",iSize);
	
	for(i=0;i<iSize;i++)
	{
		scanf("%d",&ptr[i]);
	}
	iRet=Difference(ptr,iSize);
	printf("difference is: %d\n",iRet);
	free(ptr);
	return 0;
}

