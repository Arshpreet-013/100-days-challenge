//Search for an element in an array using linear search.
#include <stdio.h>
int main()
{
    int i, n, search, arr[100];  
    printf("Enter number of elements in array: ");
    scanf("%d", &n);    
    printf("Enter %d elements:\n", n);  
    for (i = 0; i < n; i++)    
    {  
        scanf("%d", &arr[i]); // Input array elements
    }  
    printf("Enter element to search: ");
    scanf("%d", &search);  
    for (i = 0; i < n; i++)    
    {  
        if (arr[i] == search) // Check if element is found
        {
            printf("Element %d found at index %d\n", search, i);
            return 0; // Exit if found
        }
    }
    printf("Element %d not found in the array\n", search);
    return 0;
}
