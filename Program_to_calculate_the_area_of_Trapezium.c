#include<stdio.h>
int main()
{
    int b1,b2,h;
    scanf("%d%d%d",&b1,&b2,&h);
    float area;
    area=((b1+b2)*h)/2.0;
    printf("%0.4f",area);
}