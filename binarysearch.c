//Search in a sorted array using binary search.
#include <stdio.h>
int main()
{
    int i, n, search, arr[100], low, high, mid;  
    printf("Enter number of elements in sorted array: ");
    scanf("%d", &n);    
    printf("Enter %d sorted elements:\n", n);  
    for (i = 0; i < n; i++)    
    {  
        scanf("%d", &arr[i]); // Input sorted array elements
    }  
    printf("Enter element to search: ");
    scanf("%d", &search);  
    low = 0;
    high = n - 1;  
    while (low <= high)    
    {  
        mid = (low + high) / 2; // Find the middle index
        if (arr[mid] == search) // Check if element is found
        {
            printf("Element %d found at index %d\n", search, mid);
            return 0; // Exit if found
        }
        else if (arr[mid] < search) // If element is in the right half
        {
            low = mid + 1;
        }
        else // If element is in the left half
        {
            high = mid - 1;
        }
    }
    printf("Element %d not found in the array\n", search);
    return 0;
}   