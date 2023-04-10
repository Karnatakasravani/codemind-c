#include<stdio.h>
 int binary_search(int a[],int l,int h,int k)
    {
    	if(l>h) 
    	{
    		return -1;
		}
    	 int m;
    		m=(l+h)/2;
    		if(a[m]==k)
    		{
    			return m;
			}
			if(a[m]>k)
			{
				h=m-1;
			}
			else
			{
				l=m+1;
			}
		 binary_search(a,l,h,k);
		
	}
	int main()
	{
		int n,i,k,res;
		scanf("%d",&n);
		
		int a[n];
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			
		}
		scanf("%d",&k);
	 res=binary_search(a,0,n-1,k);
	 printf("%d",res);
	}
	// nxt class there is test of searching a element using binary search and linear including algorithm

