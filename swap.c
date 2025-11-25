//Write a program to swap the first and last digit of a number.
#include <stdio.h>
int swap_first_last(int num) {
    // Convert number to string to easily access digits
    char str[20];
    sprintf(str, "%d", num);
    
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    
    // If the number has only one digit, return it as is
    if (len == 1) {
        return num;
    }
    
    // Swap the first and last digits
    char temp = str[0];
    str[0] = str[len - 1];
    str[len - 1] = temp;
    
    // Convert back to integer
    int swapped_num;
    sscanf(str, "%d", &swapped_num);
    
    return swapped_num;
}