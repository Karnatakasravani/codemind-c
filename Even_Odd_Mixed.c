#include<stdio.h>
int main()
{
      int o=0,e=0,n,r;
    scanf("%d",&n);
    while(n!=0){
        r=n%10;
        if(n%2==0)
        e++;
        else
        o++;
        n=n/10;
    }
    if(e!=0&&o==0)
    printf("Even");
    else if(e==0&&o!=0)
    printf("Odd");
    else if(e!=0&&o!=0)
    printf("Mixed");
}