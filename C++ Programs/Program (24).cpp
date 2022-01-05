#include<iostream>
using namespace std;

typedef struct node
{
	int data;
	struct node *next;
	
}NODE,*PNODE,**PPNODE;

void InsertFirst(PPNODE Head,int no)
{
	PNODE newn=new NODE;
	
	newn->data=no;
	newn->next=NULL;
	
	if(*Head==NULL)
	{
		*Head=newn;
	}
	else
	{
		newn->next=*Head;
		*Head=newn;
	}
}

void Display(PNODE Head)
{
	while(Head!=NULL)
	{
		cout<<"|"<<Head->data<<"|\t";
		Head=Head->next;
	}
	cout<<"\n";
}

int Count(PNODE Head)
{
	int iCnt=0;
	
	while(Head!=NULL)
	{
		iCnt++;
		Head=Head->next;
	}
	
	return iCnt;
}

int main()
{
	PNODE first=NULL;
	
	InsertFirst(&first,101);
	InsertFirst(&first,51);
	InsertFirst(&first,11);
	
	Display(first);
	
	int iRet=Count(first);
	cout<<"Number of Elements :"<<iRet<<endl;
	
	return 0;
}