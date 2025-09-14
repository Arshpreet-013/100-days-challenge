//Write a program to display the month name and number of days using switch-case for a given month number.
#include <stdio.h>
int main()
{
    int monthnum;
    printf("Enter the month number(1-12):");
    scanf("%d",&monthnum);
    printf("Month:");
    switch(monthnum)
    {
        case 1:
        printf("January\n");
        printf("Days=31\n");
        break;
        case 2:
        printf("February\n");
        printf("Days=28\n");
        break;
        case 3:
        printf("March\n");
        printf("Days=31\n");
        break;
        case 4:
        printf("April\n");
        printf("Days=30\n");
        break;
        case 5:
        printf("May\n");
        printf("Days=31\n");
        break;
        case 6:
        printf("June\n");
        printf("Days=30\n");
        break;
        case 7:
        printf("July\n");
        printf("Days=31\n");
        break;
        case 8:
        printf("August\n");
        printf("Days=31\n");
        break;
        case 9:
        printf("September\n");
        printf("Days=30\n");
        break;
        case 10:
        printf("October\n");
        printf("Days=31\n");
        break;
        case 11:
        printf("November\n");
        printf("Days=30\n");
        break;
        case 12:
        printf("December\n");
        printf("Days=31\n");
        break;
    }
    return 0;
}