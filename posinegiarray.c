//Count positive, negative, and zero elements in an array.
#include <stdio.h>
int main()
{
    int i;
    int pos_count = 0;
    int neg_count = 0;
    int zero_count = 0; 
    int arr[5] = {10, -21, 0, 43, -54};  
    for (i = 0; i < 5; i++)    
    {  
        if (arr[i] > 0) // Check for positive
        {
            pos_count++;
        }
        else if (arr[i] < 0) // Check for negative
        {
            neg_count++;
        }
        else // Otherwise, it's zero
        {
            zero_count++;       
        }
    }
    printf("Number of positive elements: %d\n", pos_count);
    printf("Number of negative elements: %d\n", neg_count);
    printf("Number of zero elements: %d\n", zero_count);
    return 0;
}