//Find the sum of array elements.
#include <stdio.h>
int main()
{
    int i;
    int sum = 0;
    int arr[5] = {10, 20, 30, 40, 50};  
    for (i = 0; i < 5; i++)
    {  
        sum += arr[i]; // Adding each element to sum
    }
    printf("Sum of array elements is %d\n", sum);
    return 0;
}