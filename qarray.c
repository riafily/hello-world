#include<stdio.h>
#include<stdlib.h>
#define size 5
void enqueue(int);
int dequeue();
void display();
int a[size],front=-1,rear=-1;
void main()
{
 int i,n,x; 
do{
  printf("\nMenu \n1.Enqueue\n2.Deque\n3.Display\n4.Exit");
  scanf("%d",&n);
  switch(n)
  { 
   case 1:printf("Enter the value");
          scanf("%d",&x);   
          enqueue(x); 
          break;
   case 2: i=dequeue();
   		   if(i==0)
   		   	printf("Queue is empty");
   		   else
            printf("Dequeued value is %d",i);
           break;
   case 3 :display();
           break;
   case 4:exit(0);
	  break;
   default :printf("\nInvalid");
 }
}while(n!=4); 
}
void enqueue(int x)
{
  if (rear>=size-1)
   {
    printf("Queue is full");
    return;
 }
if(front==-1)
 {
   front=0;
   rear=0;
 }
else
  rear++;
a[rear]=x;
}
int dequeue()
 {
    if(rear==-1)
     {
       printf("Queue is empty");
       return '\0';
     }
   else
    {
     return a[front++];
     }
}
void display()
{ 
printf("\n");
 for(int i=front;i<=rear;i++)
{
 printf("%d ",a[i]);	
}
}

   
