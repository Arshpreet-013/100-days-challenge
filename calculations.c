//Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>
int main()
{
    float num1,num2,sum,diff,pro,quo;
    printf("Enter two numbers:\n");
    scanf("%f %f",&num1, &num2);
    sum=num1+num2;
    diff=num1-num2;
    pro=num1*num2;
    quo=num1/num2;
    printf("\nThe sum of the numbers is:%f",sum);
    printf("\nThe difference of the numbers is:%f",diff);
    printf("\nThe product of the numbers is:%f",pro);
    printf("\nThe quotient of the numbers is:%f",quo);
    return 0;
}