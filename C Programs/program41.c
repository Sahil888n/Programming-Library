//Accept n numbers and display the minimum number between them
#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[],int iLength)
{
	int i=0,iMin=Arr[i];
	
	for(i=0;i<iLength;i++)
	{
		if(iMin>=Arr[i])
		{
			iMin=Arr[i];
		}
	}
	return iMin;
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
	iRet=Minimum(ptr,iSize);
	printf("Minimum is: %d\n",iRet);
	free(ptr);
	return 0;
}

