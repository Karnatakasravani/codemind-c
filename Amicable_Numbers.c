#include<stdio.h>
int main()
{
    
    int i;
    int firstNumber,secondNumber;
    int firstDivisorSum = 0;
    int secondDivisorSum = 0;
    scanf("%d %d",&firstNumber,&secondNumber);
    for(int i=1;i<firstNumber;i++)
    {
        if(firstNumber % i == 0)
        {
            firstDivisorSum = firstDivisorSum + i;
        }
    }
    for(int i=1;i<secondNumber;i++)
    {
        if(secondNumber % i == 0)
        {
            secondDivisorSum = secondDivisorSum + i;
        }
    }

    //7
    if((firstNumber == secondDivisorSum) && (secondNumber == firstDivisorSum)){
        printf("Amicable
");
    }else{
        printf("Not Amicable
");
    }

}