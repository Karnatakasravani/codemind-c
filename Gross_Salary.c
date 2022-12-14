#include<stdio.h>
int main()
{
    int bs,da,hra;
    scanf("%d",&bs);
    float gs;
    if(bs<=10000)
    gs=((bs*0.8)+(bs*0.2)+bs);
    else if(bs<=20000)
    gs=((bs*0.9)+(bs*0.25)+bs);
    else if(bs>20000)
    gs=((bs*0.95)+(bs*0.3)+bs);
    printf("%0.2f",gs);
}