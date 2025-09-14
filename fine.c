/*Write a program to calculate library fine based on late days as follows:
First 5 days late: ₹2/day
Next 5 days late: ₹4/day
Next 20 days days late: ₹6/day
More than 30 days: Membership Cancelled.*/
#include <stdio.h>
int main()
{
    int days,fine,totalfine;
    printf("Enter the number of days your book was late:");
    scanf("%d",&days);
    if(days>0 && days<6)
    {
        fine=days*2;
        printf("Your fine is:%d",fine);
    }
    else if(days>5 && days<11)
    {
        fine=(5*2)+((days-5)*4);
        printf("Your fine is:%d",fine);
    }
    else if(days>10 && days<31)
    {
        fine=(5*2)+(5*4)+((days-10)*6);
        printf("Your fine is:%d",fine);
    }
    else if(days>30)
    {
        printf("Membership cancelled");
    }
    else
    {
        printf("No fine");
    }
    return 0;
}