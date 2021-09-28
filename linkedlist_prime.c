#include<stdio.h>
#include<stdlib.h>
void create();
void prime();
int isprime(int);
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
		printf("\n choose your option: ");
		printf("\n 1: To  create \n 2: to display prime numbers\n ");
		scanf("%i",&charr);
		switch(charr)
		{
			case 1:create();
			break;
			case 2:prime();
			break;
			default :printf("Something went wrong!!!!! compiling failed..!!try again!");
			return 0;
		}
	}
}
//create funtion
void create()
{
	int n,i;
	printf("enter amount of nodes to be created: ");
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
 //prime or not
 int isprime(int n)
 {
 int i;
 for(i=2;i<=n/2;i++)
 {
 	if(n%i==0)
 	return 0;
 else
 return 1;
}
 }
  //printing prime numbers
 void prime()
 {
 	struct node *ptr;
 	ptr=head;
 	printf("\nprime numbers are :\n");  
    while(ptr!=NULL)
{
	int p=isprime(ptr->data);
	if(p==1)
	printf("%d\t",ptr->data);
	ptr=ptr->next;
}
}
