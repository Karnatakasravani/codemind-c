#include<stdio.h>
int main()
{
    int d,c,t1,t2,x,nc,b1,b2,b3,a1,a2,a3;
    scanf("%d%d%d%d%d%d%d%d",&d,&c,&a1,&a2,&a3,&b1,&b2,&b3);
    t1=a1+a2+a3;
    t2=b1+b2+b3;
    if(t1<150&&t2<150)
    printf("NO");
    else if(t1>=150&&t2>=150)
    {
        if(t1+t2+2*d>t1+t2+c)
        printf("YES");
        else 
        printf("NO");
    }
    else if(t1<150&&t2>=150)
    {
        if(t1+t2+2*d>t1+t2+c)
        printf("YES");
        else
        printf("NO");
    }
    else if(t1<150&&t2>=150)
    {
        if(t1+t2+2*d>t1+t2+c)
        printf("YES");
        else
        printf("NO");
    }
    else if(t1>=150&&t2<150)
    {
        if(t1+t2+d>t1+t2+c)
        printf("YES");
        else
        printf("NO");
    }
}