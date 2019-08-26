#include<stdio.h>
void selection(int a[],int n)
{
int i,j,t,min;
for(i=0;i<n;i++)
	{
	min=i;
	for(j=i+1;j<n;j++)
		{
		if(a[j]<a[min])
			{t=a[j];
			a[j]=a[min];
			a[min]=t;
			}
		}
	}
}
void main()
{
int a[15],n;
 printf("enter the limit");
 scanf("%d",&n);
 printf("enter array elements");
 for (int i=0;i<n;i++)
 scanf("%d",&a[i]);
 selection(a,n);
 printf("sorted array\n");
 for(int i=0;i<n;i++)
 printf("%d ",a[i]);
}

