//Find the maximum and minimum element in an array.
#include <stdio.h>
int main()
{
    int i;
    int arr[5] = {10, 20, 30, 40, 50};  
    int max = arr[0]; // Initialize max to the first element
    int min = arr[0]; // Initialize min to the first element

    for (i = 1; i < 5; i++)
    {  
        if (arr[i] > max) // Check for maximum
        {
            max = arr[i];
        }
        if (arr[i] < min) // Check for minimum
        {
            min = arr[i];
        }
    }

    printf("Maximum element is %d\n", max);
    printf("Minimum element is %d\n", min);
    return 0;
}