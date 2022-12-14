#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    c=b;
    b=a;
    a=c;
    printf("%d
%d",a,b);
}