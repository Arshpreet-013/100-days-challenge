//Delete an element from an array.
#include <stdio.h>
int main()
{
    int i, n, position;  
    int arr[100];  
    printf("Enter number of elements in array: ");  
    scanf("%d", &n);    
    printf("Enter %d elements:\n", n);  
    for (i = 0; i < n; i++)    
    {  
        scanf("%d", &arr[i]); // Input array elements
    }  
    printf("Enter position to delete (0 to %d): ", n - 1);
    scanf("%d", &position);  
    // Validate position
    if (position < 0 || position >= n)    
    {  
        printf("Invalid position!\n");
        return 1; // Exit with error
    }  
    // Shift elements to the left to overwrite the deleted element
    for (i = position; i < n - 1; i++)    
    {  
        arr[i] = arr[i + 1];
    }  
    n--; // Decrease the size of the array
    // Print the updated array
    printf("Array after deletion:\n");
    for (i = 0; i < n; i++)    
    {  
        printf("%d\n", arr[i]);
    }
    return 0;
}  