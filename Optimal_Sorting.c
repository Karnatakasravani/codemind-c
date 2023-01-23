#include<stdio.h>
int main(){
    int m,n,a[100],i,j,k;
    scanf("%d",&m);
    for(k=0;k<m;k++)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        int x=0,s,c=0;
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]>a[j])
                {
                    x=a[i];
                    a[i]=a[j];
                    a[j]=x;
                    c++;
                }
            }
        }
        if(c==0)
        {
            printf("0");
        }
        else{
            s=a[n-1]-a[0];
            printf("%d
",s);
        }
    }
}