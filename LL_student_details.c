#include<stdio.h>
#include<stdlib.h>
void create();
void view();
struct node   
{  
    char name[50];
    int age;
    float marks;  
    struct node *next;   
};
struct node*head=NULL,*tail=NULL;
int main()
{
	int charr;
	while(1)
	{
		printf(" choose the desires option: ");
		printf("\n 1: To create \n 2: To display the student details: \n ");
		scanf("%i",&charr);
		switch(charr)
		{
			case 1:create();
			break;
			case 2:view();
			break;
			default :printf("you have again failed us...!!! try again now!!!");
			return 0;
		}
	}
}
//creating
void create()
{
	int n,i;
	printf("Enter no. of nodes to create ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n student %d",i+1);
		struct node* temp=(struct node *)malloc(sizeof(struct node));
		printf("\n Name: ");
		scanf("%s",&temp->name);
		printf("\n Age: ");
		scanf("%d",&temp->age);
		printf("\n Marks: ");
		scanf("%f",&temp->marks);
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
 //viewing
 void view()
 {
 	struct node*ptr;
 	ptr=head;
 	printf("\n student details are:\n");
 	while(ptr!=NULL)
 	{
 		printf("Name =%s\t",ptr->name);
 		printf("Age =%d\t\t",ptr->age);
 		printf("Marks =%f\n",ptr->marks);
 		ptr=ptr->next;
	}
	printf("\n");
 }
