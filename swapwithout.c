//Write a program to swap two numbers without using a third variable.
#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    printf("\nBefore swapping:%d %d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nAfter swapping:%d %d",a,b);
    return 0;
}
