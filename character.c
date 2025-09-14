//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>
int main() 
{
    int num1,num2;
    printf("Enter num1: ");
    scanf("%d",&num1);
    printf("Enter num2: ");
    scanf("%d",&num2);
    char character;
    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &character);
    switch(character)
    {
        case '+':
            printf("The addition is: %d\n", num1 + num2);
            break;
        case '-':
            printf("The subtraction is: %d\n", num1 - num2);
            break;
        case '*':
            printf("The multiplication is: %d\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("The division is: %d\n", num1 / num2);
            else
                printf("Error: Division by zero\n");
            break;
        case '%':
            if (num2 != 0)
                printf("The modulus is: %d\n", num1 % num2);
            else
                printf("Error: Modulus by zero\n");
            break;
    }
    return 0;
}