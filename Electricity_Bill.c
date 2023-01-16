#include<stdio.h>
int main()
{
    int u;
    scanf("%d",&u);
    float c,b,s,t;
    if(u<=199)
    {
        c=1.20;
        b=u*c;
        printf("Units Consumed: %d
Cost per Unit: %0.2f
Bill: %0.2f
",u,c,b);
    }
    else if(u>=200&&u<400)
    {
        c=1.40;
        b=u*c;
        printf("Units Consumed: %d
Cost per Unit: %0.2f
Bill: %0.2f
",u,c,b);
        
    }
    else if(u>=400&&u<600)
    {
        c=1.60;
        b=u*c;
        printf("Units Consumed: %d
Cost per Unit: %0.2f
Bill: %0.2f
",u,c,b);
    }
    else if(u>=600&&u<800)
    {
        c=1.80;
        b=u*c;
        printf("Units Consumed: %d
Cost per Unit: %0.2f
Bill: %0.2f
",u,c,b);
        
    }
    else 
    {
        c=2.00;
        b=u*c;
        printf("Units Consumed: %d
Cost per Unit: %0.2f
Bill: %0.2f
",u,c,b);
        
    }
    if(b>400)
    {
        s=(b*15)/100;
        t=s+b;
        printf("Surcharge: %0.2f
Total Amount: %0.2f",s,t);
    }
    else
    {
        s=0.00;
        t=s+b;
        printf("Surcharge: %0.2f
Total Amount: %0.2f",s,t);
    }
    
}