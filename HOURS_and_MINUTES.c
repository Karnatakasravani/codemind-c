#include<stdio.h>
int main()
{
    int min;
    scanf("%d",&min);
    int hrs,MIN;
    hrs=min/60;
    MIN=min%60;
    printf("%d Hour(s) %d Minute(s)",hrs,MIN);
}