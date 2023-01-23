#include<stdio.h>
int main()
{
    int Tc;
    scanf("%d",&Tc);
    while(Tc--)
    {
        int n,rev=0,rem,p;
        scanf("%d",&n);
        p=n;
        while(n>0)
        {
            rem=n%10;
            n=n/10;
            rev=rev*10+rem;
        }
        if(p==rev)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
}
