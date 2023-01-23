#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int lcm=(a>b)?a:b;
    while(1)
    {
        if(lcm%a==0&&lcm%b==0)
        break;
        lcm++;
    }
    printf("%d",lcm);
    return 0;
}
