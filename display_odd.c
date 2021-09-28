#include<stdio.h>
#include<stdlib.h>

void create();
void odd();
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
  printf("\n enter your choice");
  printf("\n 1: to create \n 2: to display odd numbers \n");
  scanf("%i",&charr);
  switch(charr)
  {
   case 1:create();
   break;
   case 2:odd();
   break;
   default :printf("warning..!! wrong choice..try again!");
   return 0;
  }
 }
}
//create funtion to create nodes
void create()
{
 int n,i;
 printf("enter the number of nodes to create: ");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  struct node* temp=(struct node *)malloc(sizeof(struct node));
  printf("enter data: ");
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
 
 //function for printing odd numbers
 void odd()
 {
  struct node *ptr;
  printf("odd numbers are:\n");
  ptr=head;
  while(ptr!=NULL)
  {
   if(ptr->data%2!=0)
   printf("%d\t",ptr->data);
   ptr=ptr->next;
  }
 }

