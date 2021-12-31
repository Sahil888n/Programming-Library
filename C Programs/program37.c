//Accept n numbers from user and show addition of odd numbers

#include<stdio.h>
#include<stdlib.h>

int SumOdd(int Arr[],int iLength)
{
	int i=0,iOdd=0;
	for(i=0;i<iLength;i++)
	{
		if((Arr[i]%2)==1)
		{
			iOdd=iOdd+Arr[i];
		}
	}
	return iOdd;
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
	iRet=SumOdd(ptr,iSize);
	printf("The addition of odd numbers is: %d\n",iRet);
	free(ptr);
	return 0;
}

