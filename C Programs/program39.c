//Accept n numbers and display count of numbers graeter than 10 and less than 20
#include<stdio.h>
#include<stdlib.h>

int Greater(int Arr[],int iLength)
{
	int i=0,iCnt=0;
	for(i=0;i<iLength;i++)
	{
		if(Arr[i]>10 && Arr[i]<20)
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
	iRet=Greater(ptr,iSize);
	printf("The count of numbers greater than 10 is: %d\n",iRet);
	free(ptr);
	return 0;
}

