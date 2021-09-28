#include<stdio.h>
#include<stdlib.h>
void create();
void even();
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
  printf("\n enter your choice: ");
  printf("\n 1 for create \n 2 to display even numbers \n ");
  scanf("%i",&charr);
  switch(charr)
  {
   case 1:create();
   break;
   case 2:even();
   break;
   default :printf("warning..!!! try again!");
   return 0;
  }
 }
}
//create funtion
void create()
{
 int n,i;
 printf("enter the number of nodes to create ");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  struct node* temp=(struct node *)malloc(sizeof(struct node));
  printf("enter your data ");
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
 //function for printing even numbers among the list
 void even()
 {
  struct node *ptr;
  printf("the even numbers are: \n");
  ptr=head;
  while(ptr!=NULL)
  {
   if(ptr->data%2==0)
   printf("%d\t",ptr->data);
   ptr=ptr->next;
  }
 }

