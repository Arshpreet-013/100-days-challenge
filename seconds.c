//Write a program to input time in seconds and convert it to hours:minutes:seconds format
#include <stdio.h>
#include <math.h>
int main()
{
   int sec,hour,min,sec2;
    printf("Enter seconds:");
    scanf("%d",&sec);
    hour=sec/3600;
    min=(sec%3600)/60;
    sec2=(sec%3600)%60;
    printf("\nThe time in hours:minutes:seconds is: %d %d %d",hour,min,sec2);
    return 0;
}