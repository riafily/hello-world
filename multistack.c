#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int a[MAX];
int top1=-1,top2=MAX;
int data,choice;

void push1()
{   if((top1+1)<top2)
    {  top1++;
       a[top1]=data;
    }
    else 
    {  printf("Stack is full\n");
    }
}

void push2()
{  int i=0; 
   if((top1+1)<top2)
    {  printf("Stack is full\n");
    }
    else 
    {  i++;
       top2=MAX-i;
       a[top2]=data;
    }
}   

void pop1()
{   if(top1==-1)
    {   printf("The stack is empty\n");
        return;
    }
    else
    {   printf("Popped element is %d\n",a[top1]);
        top1--;
    }
}

void pop2()
{   if(top2==MAX)
    {   printf("The stack is empty\n");
        return;
    }
    else
    {   printf("Popped element is%d\n",a[top2]);
        top2++;
        if(top2>=MAX)
          top2=-1;
    }
}

void displ1()
{   if(top1==-1)
      printf("The stack is empty\n");
    else
    { for(int i=top1;i<=0;i--)
        printf("%d",a[i]);
    }
}

void displ2()
{   if(top2==-1)
      printf("The stack is empty\n");
    else
    { for(int i=top2;i<MAX;i++)
        printf("%d",a[i]);
    }
}

void main()
{  
    int x;
    printf("MENU\n1.Push to stack 1\n2.Push to stack 2\n3.Pop from stack 2\n4.Pop from stack 2\n5.Display stack 1\n6.Dispay stack 2");
    do{
     printf("Enter choice:\n");
     scanf("%d",&choice);
     switch(choice)
     {   case 1:printf("Enter the data:\n");
                scanf("%d",&data);
                push1();
                break;
         case 2:printf("Enter the data:\n");
                scanf("%d",&data);
                push2();
                break;
         case 3:pop1();
                break;
         case 4:pop2();
                break;
         case 5:displ1();
                break;
         case 6:displ2();
                break;
         default:printf("Wrong choice:\n");
     }
     printf("Do you want to continue?");
        scanf("%d",&x);
    }while(x!=0);
}
    
    
