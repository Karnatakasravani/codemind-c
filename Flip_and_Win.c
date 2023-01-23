#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int n,i,c=0;
    char s[10000];
    scanf("%d",&n);
    scanf("%s",s);
    for(i=1;s[i]!=NULL;i++)
    {
        c+=abs(s[i]-s[i-1]);
    }
    c=n-c-1;
    if(c%3==0)
    printf("Sudhir");
    else
    printf("Ashok");
}