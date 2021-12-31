//Accept n numbers and display the maximum number between them
#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[],int iLength)
{
	int i=0,iMax=Arr[0];
	for(i=0;i<iLength;i++)
	{
		if(iMax<=Arr[i])
		{
			iMax=Arr[i];
		}
	}
	return iMax;
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
	iRet=Maximum(ptr,iSize);
	printf("Maximum is: %d\n",iRet);
	free(ptr);
	return 0;
}

