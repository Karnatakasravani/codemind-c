#include<stdio.h>
int main()
{
    float b,hra,da,pf;
    float grosssalary;
    scanf("%f%f%f",&b,&hra,&da);
    pf=b*12/100;
    grosssalary=b+hra+da+pf;
    printf("%0.2f
%0.2f",pf,grosssalary);
}