#include<stdio.h>
#include<stdlib.h>
void create();
void view();
void ascending();
void descending();
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
		printf(" choose an option:");
		printf("\n 1: to create the linked list \n 2: To view \n 3: to sort in accending order\n 4: to sort in descending order:\n");
		scanf("%i",&charr);
		switch(charr)
		{
			case 1:create();
			break;
			case 2:view();
			break;
			case 3:ascending();
			break;
			case 4:descending();
			break;
			default :printf("you did a wrong action..!!buckle up and try again..!!");
			return 0;
		}
	}
}
//create
void create()
{
	int n,i;
	printf("enter no. of nodes  to create: ");
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
 //view
 void view()
 {
 	struct node*ptr;
 	ptr=head;
 	while(ptr!=NULL)
 	{
 		printf("%d\t",ptr->data);
 		ptr=ptr->next;
	}
	printf("\n");
 }
  
  //list in ASCENDING order
  void ascending()
  {
  	int element;
  	struct node *ptr=head,*cpt;
  	while(ptr!=NULL)
  	{
  		cpt=ptr->next;
  		while(cpt!=NULL)
	    {
  		    if(ptr->data>cpt->data)
  		   {   
  		    element=ptr->data;
  		    ptr->data=cpt->data;
  		    cpt->data= element;
		    }
	    cpt=cpt->next;
	    }
	  
   	 ptr=ptr->next;  
    }
    	 printf("ascending sort: \n");
	 view();	  
}
    
    
    //LIST IN DESCENDING order
  void descending()
  {
  	int element;
  	struct node *ptr=head,*cpt;
  	while(ptr!=NULL)
  	{
  		cpt=ptr->next;
  		while(cpt!=NULL)
	    {
  		    if(ptr->data<cpt->data)
  		   {   
  		    element=ptr->data;
  		    ptr->data=cpt->data;
  		    cpt->data= element;
		    }
	    cpt=cpt->next;
	    }
	  
   	 ptr=ptr->next;  	  
    }
     printf("descending sort: \n");
printf("\n");
    view();  
}

