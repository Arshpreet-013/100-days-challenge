//Reverse an array without taking extra space.
#include <stdio.h>
int main()
{
    int i;
    int arr[5] = {10, 20, 30, 40, 50};  
    int n = 5; // Size of the array
    // Reversing the array in place
    for (i = 0; i < n / 2; i++)
    {  
        int temp = arr[i]; // Store current element in temp
        arr[i] = arr[n - i - 1]; // Swap with the corresponding element
        arr[n - i - 1] = temp; // Assign temp to the corresponding position
    }   
    // Print the reversed array
    printf("Reversed array elements are:\n");
    for (i = 0; i < n; i++)
    {  
        printf("%d\n", arr[i]);
    }
    return 0;
}