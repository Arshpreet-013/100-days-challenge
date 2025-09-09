//Write a program to find the roots of a quadratic equation and categorize them.
#include <stdio.h>
#include <math.h>
int main()
{
    int discriminant,a,b,c,root1,root2,imgpart,realpart;
    printf("Enter the coefficients a, b and c:");
    scanf("%d %d %d",&a,&b,&c);
    discriminant = b*b - 4*a*c;
    if(discriminant>0)
    //for real and distinct roots
    {
        root1=(-b + sqrt(discriminant)/2*a);
        root2=(-b -sqrt(discriminant)/2*a);
        printf("Roots are real and different\n");
        printf("Root1 = %d\n",root1);
        printf("Root2 = %d\n",root2);
    }
    else if(discriminant == 0)
    //for real and equal roots
    {
        root1=root2=-b/(2*a);
        printf("Roots are real and same\n");
        printf("Root1 = Root2 = %d\n",root1);
    }
    else    
    {
    //for complex roots
        realpart = -b/(2*a);
        imgpart = sqrt(-discriminant)/(2*a);
        printf("Roots are complex and different\n");
        printf("Root1 = %d + i%d\n",realpart,imgpart);
        printf("Root2 = %d - i%d\n",realpart,imgpart);
    }
    return 0;
}