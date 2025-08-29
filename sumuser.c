//Write a program to input two numbers and display their sum.
#include <stdio.h>
int main()
{
    int num1, num2, sum;
    printf("Enter the values of num1 and num2");
    scanf("%d %d", &num1, &num2 );
    sum=num1+num2;
    printf("sum of %d and %d = %d", num1, num2, sum);
    return 0; 
}
