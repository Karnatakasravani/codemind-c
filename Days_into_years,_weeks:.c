#include<stdio.h>
int main()
{
    int days;
    scanf("%d",&days);
    int years,weeks;
    years=days/365;
    weeks=(days%365)/7;
    printf("%d
%d",years,weeks);
}