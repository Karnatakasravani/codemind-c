#include<stdio.h>
#include<math.h>
int main()
{
    float P,R,T;
    scanf("%f%f%f",&P,&R,&T);
    float interest;
    interest=P*pow((1+(R/100.0)),T)-P;
    printf("%0.2f",interest);

}