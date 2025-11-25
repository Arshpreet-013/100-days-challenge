//Read and print elements of a one-dimensional array.
#include <stdio.h>
#include<stdio.h>
int main()
{
int i;
int arr[5] = {10,20,30,40,50};  
for (i=0;i<5;i++)
{  // Accessing each variable
printf("value of arr[%d] is %d \n", i, arr[i]);
}
}