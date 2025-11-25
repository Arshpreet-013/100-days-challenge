//Insert an element in an array at a given position.
#include <stdio.h>
int main()
{
    int i, n, element, position;  
    int arr[100];  
    printf("Enter number of elements in array: ");  
    scanf("%d", &n);    
    printf("Enter %d elements:\n", n);  
    for (i = 0; i < n; i++)    
    {  
        scanf("%d", &arr[i]); // Input array elements
    }  
    printf("Enter element to insert: ");
    scanf("%d", &element);  
    printf("Enter position to insert (0 to %d): ", n);
    scanf("%d", &position);  
    // Validate position
    if (position < 0 || position > n)    
    {  
        printf("Invalid position!\n");
        return 1; // Exit with error
    }  
    // Shift elements to the right to make space for the new element
    for (i = n; i > position; i--)    
    {  
        arr[i] = arr[i - 1];
    }  
    // Insert the new element at the specified position
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