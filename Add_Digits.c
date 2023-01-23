#include <stdio.h>
int main()
{
    int n,t,r,s;
    scanf("%d",&n);
    if (n<0) 
    printf("%d is not a positive number.",n);
    else
    {
        t=n;
        while (t>9)
        {
            s=0;
            while (t!=0)
            {
                r=t%10;
                t=t/10;
                s+=r;
            }
            t=s;
        }
        printf("%d",t);
    }
    return 0;
}
