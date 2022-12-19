#include <stdio.h>
#include <math.h>
int main()
{
int num,a;
float b;
scanf("%d",&num);
b=sqrt((double)num);
a=b;
if(a==b)
printf("True");
else
printf("False");
return 0;
}