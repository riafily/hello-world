#include<stdio.h>
#include<stdlib.h>
#define max 20
int a[max];
int top=-1;
void push()
{
	int x;
	if((top+1)==max)
		printf("\nNo space. ");
	else
	{
		int x;
		printf("Enter value:");
		scanf("%d",&x);
		a[++top]=x;
	}
}
void pop()
{		
	if(top==-1)
		printf("Stack is empty");
	else 
		printf("Popped element is %d",a[top--]);
}
void display()
{
	if(top==-1)
		printf("Stack is empty");
	else
	{
		for(int i=top;i>=0;i--)
			printf("%d, ",a[i]);
	}
}
int main()
{
	int x,ch;
	do
	{
		printf("Menu\n1. Push\n2. Pop\n3. Display\nEnter your choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: push();
				break;
			case 2: pop();
				break;
			case 3: display();
				break;	
			default:printf(" Wrong option ");
		}
	printf("Do you want to continue?");
	scanf("%d",&x);
	}while(x!=0);
}
