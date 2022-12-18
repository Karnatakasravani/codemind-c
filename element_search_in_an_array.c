#include <stdio.h>
int main()
{
    int arr[100];
    int n,i,r,b;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &r);
    b = 0; 
    
    for(i=0; i<n; i++)
    {
        if(arr[i] == r)
        {
            b= 1;
            break;
        }
    }
    if(b == 1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }

}