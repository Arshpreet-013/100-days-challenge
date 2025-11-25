//Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>
int main() {
    long long binary, temp;
    int digit;
    long long complement = 0, place = 1;
    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    temp = binary;
    while (temp != 0) {
        digit = temp % 10; 
        if (digit == 0) {
            complement += 1 * place; 
        }
        place *= 10; 
        temp /= 10; 
    }
    printf("1's complement of %lld is %lld\n", binary, complement);
    return 0;
}