#include<stdio.h>
int main()
{
    int hf,pf,sf;
    scanf("%d%d%d",&hf,&pf,&sf);
    if(hf>50 && pf>60 && sf>100)
    printf("10");
    else if(hf>50 && pf>60 )
    printf("9");
    else if(pf>60 && sf>100)
    printf("8");
    else if(hf>50 && sf>100)
    printf("7");
    else if(hf>50 || pf>60 || sf>100)
    printf("6");
    else
    printf("5");
    
}