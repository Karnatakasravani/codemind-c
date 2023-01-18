#include<stdio.h>
#include<math.h>
int main()
{
    int n,sqt,rem,rev=0,rems,revs=0,temp;
    scanf("%d",&n);
    temp=n*n;
    while(temp!=0)
    {
        rem=temp%10;
        rev=(rev*10)+rem;
        temp=temp/10;
    }
    sqt=sqrt(rev);
    while(sqt!=0)
    {
         rems=sqt%10;
         revs=(revs*10)+rems;
         sqt=sqt/10;
    }
    if(revs==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
        return 0;
    }
}