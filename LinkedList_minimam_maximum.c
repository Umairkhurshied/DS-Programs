#include<stdio.h>
#include<stdlib.h>
void create();
void max();
void min();
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
		printf("choose any of below options: ");
		printf("\n  1: to create the linked list \n 2: To find maximum element \n 3: To find minimum element\n");
		scanf("%i",&charr);
		switch(charr)
		{
			case 1:create();
			break;
			case 2:max();
			break;
			case 3:min();
			break;
			default :printf("mayday!! mayday!! wrong option entered...try again!");
			return 0;
		}
	}


}
//create funtion
void create()
{
	int n,i;
	printf("enter no. of nodes to create: ");
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
 //   maximum 
 void max()
 {
 	int max=head->data;
 	struct node *ptr;
 	ptr=head;
 	while(ptr!=NULL)
 	{
 		if(max<ptr->data)
 		{
 			max=ptr->data;
		 }
		 ptr=ptr->next;
	 }
	 printf("\n maximum element is:%d\n",max);
 }
 
  // minimum
 void min()
 {
 	int min=head->data;
 	struct node *ptr;
 	ptr=head;
 	while(ptr!=NULL)
 	{
 		if(min>ptr->data)
 		{
 			min=ptr->data;
		 }
		 ptr=ptr->next;
	 }
	 printf(" minimum element is:%d",min);
 printf("\n");
 }
