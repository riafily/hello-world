#include<stdio.h>
void insertion(int a[],int n)
{
int temp,i,j,pos;
for(i=1;i<n;i++)
 {
	int temp=i;
	int element=a[i];
	while(temp>0&&a[temp-1]>element)
	{
		a[temp]=a[temp-1];
		temp=temp-1;
	}
  a[temp]=element;
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
insertion(a,n);
for(i=0;i<n;i++)
	printf("%d ",a[i]);
}
