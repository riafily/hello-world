#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* next;
};
struct node* head=NULL;
struct node* temp;
struct node* temp1;
int count()
{
	int c=1;
	temp=head;
	while(temp->next!=NULL)
	{
		c++;
		temp=temp->next;
	}
	return c;
}		
void insert()
{	
	int x;
	struct node* newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	if(newnode==NULL)
	{
		printf(" No memory ");
		return;
	}
	else
	{
		printf(" Enter data: ");
		scanf("%d",&x);	
		newnode->data=x;
		newnode->next=NULL;
		if(head==NULL)
		{	
			head=newnode;
		}
		else
		{
                        head->next=newnode;
                        head=newnode;
			}
        }
}
void delete()
{
	if(head==NULL)
	{
		printf(" No elements to delete ");
		return;
	}
	else
	{
		int pos;
		printf(" Enter the position to be deleted ");
		scanf("%d",&pos);
		if(pos==1)
		{
			temp=head;
			head=temp->next;
			free(temp);
		}
		else
		{
			int c;
			c=count();
			int i=1;
			if(pos<0||pos>c)
			{
				printf(" Invalid position ");
			}
			else
			{
				printf("%d",c);
				temp=head;
				while(i<pos)
				{
					if(i==(pos-1))
						temp1=temp;
					temp=temp->next;
					i++;
				}
				temp1->next=temp->next;
				free(temp);
			}
		}
	}
}
void search()
{
	if(head==NULL)
	{
		printf(" No element to search ");
		return;
	}
	else
	{
		printf("Enter the data to be searched: ");
		int a;
		scanf("%d",&a);
		int i=1;
		temp=head;
		while(temp->next!=NULL)
		{
			if(temp->data==a)
			{
				printf("Element found at %d",i);
				return;
			}
			temp=temp->next;
			i++;
		}
		if(temp->data==a)
			printf("Element present at %d",i);
		else
			printf("Element not present ");
		
	}
}
void traverse()
{
	if(head==NULL)
	{
		printf("List is Empty! ");
		return;
	}
	else
	{
		temp=head;
		while(temp->next!=NULL)
		{
			printf("%d->",temp->data);
			temp=temp->next;
		}
		printf("%d->",temp->data);
	}
}		
int main()
{
	int choice,x;
	do
	{
		printf("Menu\n1. Insertion\n2. Deletion\n3. Searching\n4. Traversal\nEnter your choice: ");
		scanf("%d",&x);
		switch(x)
           {
		case 1:insert();
                  break;
		case 2:delete();
                  break;
		case 3:search();
                  break;
                case 4:traverse();
                  break;
		default:printf(" Wrong choice ");
	      }
        printf("Do you want to continue?");
        scanf("%d",&choice);
      }while(choice!=0);
}
