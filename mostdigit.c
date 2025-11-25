//Find the digit that occurs the most times in an integer number.
#include <stdio.h>
int main()
{
    int number, digit, i;
    int count[10] = {0}; // Array to store count of digits 0-9  
    printf("Enter an integer number: ");
    scanf("%d", &number);  
    // Count occurrences of each digit
    while (number != 0)    
    {  
        digit = number % 10; // Extract the last digit
        count[digit]++; // Increment the count for this digit
        number /= 10; // Remove the last digit
    }  
    // Find the digit with the maximum count
    int max_count = count[0];
    int most_frequent_digit = 0;
    for (i = 1; i < 10; i++)    
    {  
        if (count[i] > max_count) // Check for maximum count
        {
            max_count = count[i];
            most_frequent_digit = i;
        }
    }  
    printf("The digit that occurs the most is %d with %d occurrences.\n", most_frequent_digit, max_count);
    return 0;
}