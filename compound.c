//Write a program to calculate simple and compound interest for given principal, rate, and time.
#include <stdio.h>
#include <math.h>
int main()
{
    float principle,rate,time,simpleinterest,compoundinterest,amount;
    printf("Enter the value of principle,rate,time");
    scanf("%f %f %f",&principle,&rate,&time);
    simpleinterest =(principle*time*rate)/100;
    amount=principle*pow((1+rate/100),time);
    compoundinterest=amount-principle;
    printf("\nThe simple interest is:%f",simpleinterest);
    printf("\nThe compound interest is:%f",compoundinterest);
    return 0;
}
