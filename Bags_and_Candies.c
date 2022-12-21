#include<stdio.h>
int main()
{
    int n,k,m,bags;
    scanf("%d%d%d",&n,&k,&m);
    bags=k*m;
    if(n%bags==0)
    {
        printf("%d",n/bags);
    }
    else
    {
        printf("%d",n/bags+1);
    }
}