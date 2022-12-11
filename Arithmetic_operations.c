#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int sum;
    sum=a+b;
    printf("Sum:%d
",sum);
    int sub;
    sub=a-b;
    printf("Difference:%d
",sub);
    int mul;
    mul=a*b;
    printf("Product:%d
",mul);
    int quo;
    quo=a/b;
    printf("Quotient:%d
",quo);
    int rem;
    rem=a%b;
    printf("Remainder:%d",rem);
}