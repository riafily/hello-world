#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int a[MAX];
int front=-1;
int rear=-1;
void enque()
 {
 if(front==(rear+1)%MAX)
  printf("The queue is full");
 else
   {
 	if(front==-1)
 	 {
 	  front=0;
 	  rear=0;
 	 }
 	else
 	 rear=(rear+1)%MAX;
 printf("Enter the element");
 scanf("%d",&a[rear]);
 }}
 void deque()
{
if(front==-1)
 printf("Queue is empty");
else 
 {
   printf("Deleted element is %d:", a[front]);
   if(front==rear)
   	front=rear=-1;
   	else
   	 front=(front+1)%MAX;
}
}
void display()
{
int i;
if(front==-1&&rear==-1)
 printf("Empty queue");
else if(front<rear)
{
  for(i=front;i<=rear;i++)
   printf("\n%d",a[i]);
}
else
{
for(i=front;i<MAX;i++)
 printf("%d",a[i]);
for(i=0;i<=rear;i++)
 printf("%d",a[i]);
 }
 
}
void main()
{
int i,n,x; 
do{
  printf("\nMenu \n1.Enqueue\n2.Deque\n3.Display\n4.Exit");
  scanf("%d",&n);
  switch(n)
  { 
   case 1: enque(); 
          break;
   case 2: deque();
           break;
   case 3 :display();
           break;
   case 4:exit(0);
	  break;
   default :printf("\nInvalid");
 }
}while(n!=4); 
}
