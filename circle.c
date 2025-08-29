//Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>
int main()
{
    float rad,cir,area;
    printf("Enter the radius of the circle:");
    scanf("%f",&rad);
    cir=2*3.14*rad;
    area=3.14*rad*rad;
    printf("\nThe circumference of the circle is:%f",cir);
    printf("\nThe area of the circle is:%f",area);
    return 0;
}