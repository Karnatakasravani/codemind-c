#include<stdio.h>
int main()
{ 
    int a,i,c=0,s=0,n; 
    scanf("%d",&a); 
    for(i=a;i>0;) 
    {
        n=i%10; 
        if(n%2==0) 
        {
            c=c+1; 
            
        }
        else
        { 
            s=s+1; 
            
        }
        i=i/10;
        }
        if(c==0)
        printf("Odd");
        else if(s==0)
        printf("Even"); 
        else printf("Mixed");
    
}