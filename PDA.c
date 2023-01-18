#include<stdio.h>
int main()
{
	int n,rem,sum=0,i;
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		rem=n%i;
		if(rem==0)
		{
			sum=sum+i;
		}
	}
	if(sum==n)
	{
	    printf("PERFECT");
	}
	else if(sum<n)
	{
	    printf("DEFICIENT");
	}
	else if(sum>n)
	{
	    printf("ABUNDANT");
	}
}