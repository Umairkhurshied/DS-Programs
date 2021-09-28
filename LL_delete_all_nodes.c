#include <stdio.h>
#include <stdlib.h>
struct node
 {
    int data;          
    struct node *next;
} *head;
void create(int n);
void delete();
void display();
int main()
{
    int n, ch;
    printf("Amount of nodes you want to create: ");
    scanf("%d", &n);
    create(n);
    printf("\n Data in the list node wise: \n");
    display();
    printf("\n Press 1 to delete entire list: ");
    scanf("%d", &ch);

    delete();//deleting all nodes
    printf("\n Data in the list: \n");
    display();
    return 0;
}

void create(int n)
{
    struct node *newNode, *temp;
    int data, i;
    head = (struct node *)malloc(sizeof(struct node));

    if(head == NULL)
    {
        printf("Error allocating memory.");
    }
    else
    {
        printf("Enter data in node 1: ");
        scanf("%d", &data);
        head->data = data;
        head->next = NULL; 
        temp = head;

        /*
         * Create given nodes and adds to LL
         */
        for(i=2; i<=n; i++)
        {
            newNode = (struct node *)malloc(sizeof(struct node));

            if(newNode == NULL)
            {
                printf("Error allocating memory.");
                break;
            }
            else
            {
                printf("Enter the data in node %d: ", i);
                scanf("%d", &data);
                newNode->data = data; 
                newNode->next = NULL; 

                temp->next = newNode; // Link previous node temp to the new Node
                temp = temp->next;
            }
        }

        printf("Creating list successfull \n");
    }
}

void delete()//deleting all nodes
{
    struct node *temp;

    while(head != NULL)
    {
        temp = head;
        head = head->next;

        free(temp);
    }

    printf("****list deleted successfully****\n");
}

void display()
{
    struct node *temp;

    if(head == NULL)
    {
        printf("**** List is empty now.*****");
    }
    else
    {
        temp = head;
        while(temp != NULL)
        {
            printf("Data = %d\n", temp->data); 
            temp = temp->next;                 
        }
    }
}

