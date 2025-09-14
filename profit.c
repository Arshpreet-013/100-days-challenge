//Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>
int main()
{
    float sp,cp;
    float profitamount,pper,lper;
    printf("Enter the cost price:");
    scanf("%f",&cp);
    printf("Enter the selling price:");
    scanf("%f",&sp);
    profitamount=sp-cp;
    if(profitamount>0)
    {
    pper=(profitamount/cp)*100;
    printf("Profit: %f\n", profitamount);
    printf("The profit percentage is:%f",pper);
    }
    else if(profitamount<0)
    {
    lper=(-profitamount/cp)*100;
    printf("Loss: %f\n", -profitamount);
    printf("The loss percentage is:%f",lper);
    }
    else
    {
    printf("No profit no loss");
    }
    return 0;
}