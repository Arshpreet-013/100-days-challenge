//Write a program to take a number as input and print its equivalent binary representation.
#include <stdio.h>
void printBinary(int n) {
    if (n > 1) {
        printBinary(n / 2);
    }
    printf("%d", n % 2);
}
int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("Binary representation of %d is: ", n);
    printBinary(n);
    printf("\n");
    return 0;
}