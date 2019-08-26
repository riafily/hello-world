#include<stdio.h>
void bubble(int a[],int n)
{
int temp=0;
for(int j=0;j<n;j++)
    for(int i=0;i<n;i++)
	if (a[i]>a[i+1])
	{
		temp=a[i];
		a[i]=a[i+1];
		a[i+1]=temp;
	}
}
void main()
{
int i,a[10],n;
printf("Enter the limit");
scanf("%d",&n);
printf("Enter the elements");
for(i=0;i<n;i++)
	scanf("%d",&a[i]);
bubble(a,n);
for(i=0;i<n;i++)
	printf("%d ",a[i]);
}
