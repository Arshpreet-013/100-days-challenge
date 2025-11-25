//Insert an element in a sorted array at the appropriate position.
#include <stdio.h>
int main()
{
    int i, n, element, position;  
    int arr[100];  
    printf("Enter number of elements in sorted array: ");
    scanf("%d", &n);    
    printf("Enter %d sorted elements:\n", n);  
    for (i = 0; i < n; i++)    
    {  
        scanf("%d", &arr[i]); // Input sorted array elements
    }  
    printf("Enter element to insert: ");
    scanf("%d", &element);  
    // Find the position to insert the new element
    position = n; // Default position is at the end
    for (i = 0; i < n; i++)    
    {  
        if (arr[i] > element) // Find the first element greater than the new element
        {
            position = i;
            break;
        }
    }  
    // Shift elements to the right to make space for the new element
    for (i = n; i > position; i--)    
    {  
        arr[i] = arr[i - 1];
    }  
    // Insert the new element at the found position
    arr[position] = element;  
    n++; // Increase the size of the array
    // Print the updated array
    printf("Array after insertion:\n");
    for (i = 0; i < n; i++)    
    {  
        printf("%d\n", arr[i]);
    }
    return 0;
}