#include<stdio.h>
int sort(int a[], int n){
	int i=0,temp;
	for(int j=0;j<n;j++)
		for(i=0;i<n;i++){
			if (a[i]>a[i+1]){
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
				}
			}
}
int binary(int a[],int n,int item){
	sort(a,n);
	int beg=0,mid,end,f=0;
	end=n;
	while(beg<end){	
		mid=(beg+end)/2;
		if (a[mid]==item){
			f=1;
			break;
			}
		else if(item<a[mid])
			end=mid-1;
		else
			beg=mid+1;
		}
return f;
}
							
int linear(int a[],int n, int item){
	int f=0;	
	for(int i=0;i<n;i++){
			if(a[i]==item){
				f=1;
				break;
				}
			}
return f;		
}	
int bin_rec(int a[],int first,int last,int z)
{
  int middle;
  middle=(last+first)/2;
  if(first>last)
    return 0;
  if(a[middle]==z)
    return middle;
  else if(a[middle]<z)
    bin_rec(a,middle+1,last,z);
  else
    bin_rec(a,first,middle-1,z);
}			
void main()
{
	int a[10],n,item,f,i,ch;
	printf("Enter the limit");
	scanf("%d",&n);
	printf("Enter the numbers");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the element to be searched for");
	scanf("%d",&item);
	printf("Menu \n1.Linear \n2.Binary\n3.Binary Recursion");
	scanf("%d",&ch);
	switch(ch){
		case 1:			
			f=linear(a,n,item);
			break;
		case 2:
			f=binary(a,n,item);
			break;
		case 3:
			f=bin_rec(a,0,n,item);		
			break;
		default:
			printf("Incorrect input");	
			break;	
		
}
	if(f!=0)
		printf("Item found");
	else
		printf("Item not found");
}

