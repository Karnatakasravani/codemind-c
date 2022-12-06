#include<stdio.h>
int main()
{
	int n,i,c=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++) //i++=2,3,
	{
		if(n%i==0) //8%2=0;8%23!=0;
		{
			c++;// 1,2,3,...
		}
	}
	if(c==2)
	printf("prime");
	else
	printf("not a prime");
}