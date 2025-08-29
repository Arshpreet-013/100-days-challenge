//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>
int main()
{
    int length,width;
    printf("Enter the values of length and width:");
    scanf("%d %d",&length ,&width);
    printf("Area of Rectangle is=%d",length*width);
    printf("\n Perimeter of Rectangle is=%d",2*(length + width));
    return 0;
}
