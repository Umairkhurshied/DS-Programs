#include<stdio.h>
#include<conio.h>
#define MAX 100
int stack[MAX];
void push(int);
void view();
int pop();
int peep();
int top=-1;
int main()
{
	int ch,item;
	while(1)
	{
		printf("press 1 for push\n2 for pop\n3 for peep\n4 for view and \n5 for exit \n");
		scanf("%d",&ch);
		if(ch==1)
		{
			printf("enter item to be inserted \n");
			scanf("%d",&item);
			push(item);
		}
		else if(ch==2)
		{
			item=pop();
			printf("poped item =%d\n",item);
		}
		else if(ch==3)
		printf("top element is %d\n",item);
		else if(ch==4)
		view();
		else 
		break;
	}
	return 0;
}
void push(int item)
{
	if(top<=MAX-1)
	{
		stack[++top]=item;
	}
	else
	printf("stack overflow\n");
}
int pop()
{
	if(top==1)
	printf("stack underflow\n");
	else
	return stack[top--];
}
int peep()
{
	if(top==-1)
	printf("stact is empty \n");
	else
	return stack[top];
}
void view()
{
	int i;
	if(top==-1)
	printf("stack empty \n");
	else
	{
		for(i=0;i<=top;i++)
		{
			printf("%d",stack[i]);
		}
	}
}
