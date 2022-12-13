#include<stdio.h>
int main()
{
	int n,i,a=0,b=1,c,cnt=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		c=a+b;
		if(c==n)
		{
			cnt++;
			break;
		}
		a=b;
		b=c;
	}
	if(cnt!=0)
	{
	    printf("True");
	}
	else
	{
	    printf("False");
	}
}