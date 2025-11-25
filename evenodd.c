//Count even and odd numbers in an array.
#include <stdio.h>
int main()
{
    int i;
    int even_count = 0;
    int odd_count = 0;
    int arr[5] = {10, 21, 32, 43, 54};  
    for (i = 0; i < 5; i++)    
    {  
        if (arr[i] % 2 == 0) // Check for even
        {
            even_count++;
        }
        else // Otherwise, it's odd
        {
            odd_count++;
        }
    }
    printf("Number of even elements: %d\n", even_count);
    printf("Number of odd elements: %d\n", odd_count);
    return 0;
}