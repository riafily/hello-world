#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* link;
};
struct node* front=NULL;
struct node* rear=NULL;
struct node* temp;


void enque()
{  struct node *newnode;
   newnode=(struct node *)malloc(sizeof(struct node *));
   int x;
   if(newnode==NULL)
   {  printf("No space\n");
      
   }
   else 
   { 
     printf("Enter data\n");
     scanf("%d",&x);
     newnode->data=x;
     if(front==NULL)
     {   front=newnode;
         rear=newnode;
         newnode->link=NULL;
     }
     else
     {   rear->link=newnode;
         newnode->link=NULL;
         rear=newnode;
     }
   }
}
 
void deque()
{  int item;
   if(front==NULL)
   {   printf("Queue is empty\n");
       return;
   }
   else
   {   temp=front;
       front=front->link;
       item=temp->data;
       printf("The deleted element%d\n",item);
       free(temp);
   }
}

void disp()
{  if(front==NULL)
   {   printf("Queue is empty\n");
       return;
   }
   else
   {   temp=front;
       while(temp->link!=NULL)
       {   printf("%d->",temp->data);
           temp=temp->link;
       }
       printf("%d",temp->data);
   }
}

int main()
{       int ch,x;
        printf("Menu\n1.Enqueue\n2.Dequeue\n3.Display\n");
		
	do
	{
                printf("Enter your choice:");
		scanf("%d",&ch);
		switch(ch)
                {
		  case 1:enque();
                         break;
		  case 2:deque();
                         break;
		  case 3:disque();
                        break;
		  default:printf(" \nWrong choice \n");
	        }
                printf("Do you want to continue?");
                scanf("%d",&x);               
       }while(x!=0);
}


