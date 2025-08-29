//Write a program to swap two numbers using a third variable.
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    printf("\n the numbers you gave: %d %d",a,b);
    c=a;
    a=b;
    b=c;
    printf("\n The swapped numbers are:%d %d",a,b);
    return 0;
}