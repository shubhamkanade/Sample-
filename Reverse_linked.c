#include<stdio.h>
#include<malloc.h>
typedef int BOOL;

#define TRUE 1
#define FALSE 0

typedef struct node
{
	int data;
	struct node* next;
}NODE,*PNODE,**PPNODE;

void Display(PNODE);
void InsertFirst(PPNODE,int);
void Reverse(PPNODE);
int MiddleNode(PNODE);
int main()
{
	PNODE head=NULL;

	//InsertFirst(&head,151);
	//InsertFirst(&head,121);
	//InsertFirst(&head,111);
	//InsertFirst(&head,101);
	InsertFirst(&head,51);
	InsertFirst(&head,21);
	InsertFirst(&head,11);

	//printf("the middle element is %d",MiddleNode(head));
	Display(head);
		
	Reverse(&head);
	printf("After reverse\n");;;	
	Display(head);
	return 0;
}

void InsertFirst(PPNODE first,int no)
{
	PNODE newn=NULL;
	newn=(PNODE)malloc(sizeof(NODE));

	if(newn==NULL)
	{
		return;
	}
	newn->data=no;
	newn->next=NULL;

	if(*first==NULL)
		*first=newn;
	else
	{
		newn->next=*first;
		*first=newn;
	}	
} 

void Display(PNODE first)
{
	while(first)
	{
		printf("%d ",first->data);
		first=first->next;
	}
}

/*int MiddleNode(PNODE first)
{
	PNODE temp1=first;
	PNODE temp2=first;
	
	while(temp2!=NULL && temp2->next!=NULL)
	{
		temp2=temp2->next->next;
		temp1=temp1->next;
	}
	return(temp1->data);
}*/
void Reverse(PPNODE first)
{
	PNODE prev=NULL;
	PNODE curr=*first;
	PNODE next=NULL;

	while(curr!=NULL)
	{
		prev=curr->next;
		curr->next=next;	
		next=curr;
		curr=prev;
	}
	*first=next;
}



