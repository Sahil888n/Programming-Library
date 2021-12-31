//Program to return average of given numbers

#include<stdio.h>
#include<stdlib.h>

float Average(int Arr[],int iLength)
{
	int i=0,iSum=0;
	float fResult=0.0f;
	for(i=0;i<iLength;i++)
	{
		iSum=iSum+Arr[i];
	}
	fResult=(float)iSum/(float)iLength; //Explicit typecasting
	
	return fResult;
}
int main()
{
	int *ptr=NULL;
	int i=0,iSize=0;
	float fRet=0.0f;
	printf("Enter the number of elements\n");
	scanf("%d",&iSize);
	
	ptr=(int*)malloc(iSize*sizeof(int));
	
	printf("Enter the %d elements below\n",iSize);
	
	for(i=0;i<iSize;i++)
	{
		scanf("%d",&ptr[i]);
	}
	
	fRet=Average(ptr,iSize);
	printf("The average of the above numbers is: %f",fRet);
	free(ptr);
	return 0;
}
		
   
   
   
   