#include<stdio.h>
#include<stdlib.h>
void create();
void insert();
struct node   
{  
    int data;  
    struct node *next;   
};
struct node*head=NULL,*tail=NULL;
int main()
{
	int charr;
	while(1)
	{
		printf("choose your option: ");
		printf("\n 1: To  create \n 2: for inserting a node ");
		scanf("%i",&charr);
		switch(charr)
		{
			case 1:create();
			break;
			case 2:insert();
			break;
			default :printf("Did you just do something wrong...??try again idiot!");
			return 0;
		}
	}
}
//create
void create()
{
	int n,i;
	printf("enter no. of nodes to create ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		struct node* temp=(struct node *)malloc(sizeof(struct node));
		printf("enter data ");
		scanf("%d",&temp->data);
		temp->next=NULL;
		if(i==0)
		{
			head=temp;
			tail=temp;
		}
		else 
		{
			tail->next=temp;
			tail=temp;
		}
	}
 }
 //inserting node before or after a particular node
 void insert()
 {

 	int target,n;
 	struct node *ptr,*cpt,*trav;
 	ptr=(struct node *)malloc(sizeof(struct node));
 	printf("enter element to be inserted : ");
	scanf("%d",&ptr->data);
	printf("\n press:\n 1: for inserting before a node \n 2: for inserting after a node:\n");
	scanf("%d",&n);
	if(n==1)
	{
	printf("enter node before which the node needs to be inserted: ");
	scanf("%d",&target);
	if(head->data==target)
	{
		ptr->next=head;
	    head=ptr;	
	}
	else
	{
	cpt=head;
	while(cpt->data!=target)
	{
		trav=cpt;
		cpt=cpt->next;
	}
	ptr->next=cpt;
	trav->next=ptr;
    }
   }
	if(n==2)
	{
	printf("enter the node after which the node is to be inserted: ");
	scanf("%d",&target);
	cpt=head;
	while(cpt->data!=target)
	{
		cpt=cpt->next;
	}
	ptr->next=cpt->next;
	cpt->next=ptr;
 }		
}
