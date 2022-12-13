#include<stdio.h>
int main()
{
    float a;
    scanf("%f",&a);
    int area;
    area=6*a*a;
    printf("Surface area = %d and ",area);
    int volume;
    volume=a*a*a;
    printf("Volume = %d",volume);
}