//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
# include <stdio.h>
int main()
{
    int  a,b,c;
    printf("Enter sides of triangle");
    scanf("%d %d %d ",&a,&b,&c);
    if ((a+b>c) && (b+c>a) && (c+a>b))
    {
       if (a==b && b==c)
       {
        printf("The triangle is equilateral");
       }
       else if(a==b || b==c|| c==a)
       {
        printf("The triangle is isosceles");
       }
       else
       {
         printf("The triangle is scalene");
       }
    }
    else
    {
        printf("The triangle is not valid");
    } 
    return 0;
}
