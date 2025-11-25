//Write a program to find the sum of digits of a number.
#include <stdio.h>
int main() {
    int num, sum = 0, digit;

    // Input a number from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Loop to calculate the sum of digits
    while (num != 0) {
        digit = num % 10; // Get the last digit
        sum += digit;     // Add it to sum
        num /= 10;       // Remove the last digit
    }

    // Output the sum of digits
    printf("Sum of digits is %d\n", sum);
    return 0;
}   