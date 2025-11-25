//Find the second largest element in an array.
#include <stdio.h>
int main()
{
    int i;
    int arr[5] = {10, 20, 30, 40, 50};  
    int first, second;  
    first = second = -2147483648; // Initialize to the smallest integer value       
    for (i = 0; i < 5; i++)    
    {  
        if (arr[i] > first) // Check for new maximum
        {
            second = first; // Update second largest
            first = arr[i]; // Update largest
        }
        else if (arr[i] > second && arr[i] != first) // Check for second largest
        {
            second = arr[i]; // Update second largest
        }
    }  
    if (second == -2147483648) // Check if second largest was found
    {
        printf("There is no second largest element.\n");
    }
    else
    {
        printf("The second largest element is %d\n", second);
    }
    return 0;
}