#include<stdio.h>
int main()
{
    int i,s,t,b,c;
    scanf("%d%d%d",&s,&t,&b);
    int a[3];
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++)
    {
        c=(2*s*t*b*512)/1024;
    }
        printf("%dKB",c);
    }