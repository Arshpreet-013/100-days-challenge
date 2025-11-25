//Merge two arrays.
#include <stdio.h>
int main()
{
    int i, j;
    int arr1[5] = {10, 20, 30, 40, 50};  
    int arr2[5] = {60, 70, 80, 90, 100};  
    int merged[10]; // Array to hold merged elements    
    // Copy elements from first array
    for (i = 0; i < 5; i++)    
    {  
        merged[i] = arr1[i];
    }    
    // Copy elements from second array
    for (j = 0; j < 5; j++)    
    {  
        merged[i + j] = arr2[j];
    }    
    // Print merged array
    printf("Merged array elements are:\n");
    for (i = 0; i < 10; i++)    
    {  
        printf("%d\n", merged[i]);
    }
    return 0;
}