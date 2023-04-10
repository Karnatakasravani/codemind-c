#include<stdio.h>
void insertionsort( int *arr,int n)
{
	int i,j,temp;
	for(i=1;i<n;i++)
	{
		temp=arr[i];
		for(j=i-1;j>=0;j--)
		{
	
		
			if(arr[j]<temp)
			 {
				   arr[j+1]=temp;
			    break;
			 }
	       else
	       {
		   
				arr[j+1]=arr[j];
		   }
		}
	}
if(j==-1)
{
	arr[0]=temp;
}
}
int main()
{
	int n,i,j,temp,arr[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	scanf("%d",&arr[i]);
    }
    insertionsort(arr,n);
	for(i=0;i<n;i++)
	{
    printf("%d ",arr[i]);
	}
}
