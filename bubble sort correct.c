#include<stdio.h>
void bubblesort(int *a,int n)
{
	int i,p,temp;
	for(p=0;p<=n;p++)
	{
		int c=0;
		for(i=0;i<n-p;i++)
		if(a[i]>a[i+1])
		{
			temp=a[i];
			a[i]=a[i+1];
			a[i+1]=temp;
			c++;
		}
	
	     if(c==0)
	     {
	       break;
         }
	}
	
}

int main()
{
	int n,i,a[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	bubblesort(a,n);
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}

