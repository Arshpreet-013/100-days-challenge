//Write a program to check if a number is a strong number.
#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num < 0) {
        return 0; // Strong numbers are non-negative
    }
    int original_num = num;
    int sum = 0;
    while (num > 0) {
        int digit = num % 10;
        // Calculate factorial of the digit
        int factorial = 1;
        for (int i = 1; i <= digit; i++) {
            factorial *= i;
        }
        sum += factorial;
        num /= 10;
    }
    if (sum == original_num) {
        printf("%d is a strong number.\n", original_num);
    } else {
        printf("%d is not a strong number.\n", original_num);
    }
    return 0;
}