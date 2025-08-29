//Write a program to convert temperature from Celsius to Fahrenheit.
#include <stdio.h>
int main()
{
    float C,F;
    printf("Enter temperature in celcius=");
    scanf("%f",&C);
    F=(C*9/5)+32;
    printf("Temperaature in Fahrenheit=%f\n",F);
    return 0;
}
