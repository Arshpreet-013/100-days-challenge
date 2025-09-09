//Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a digit, alphabet or special character:");
    scanf("%c",&ch);
    if(ch>= 48 && ch<=57)
    {
        printf("The character is a digit");
    }
    else if(ch>=65 && ch<=90)
    {
        printf("The character is an uppercase alphabet");
    }
    else if(ch>=97 && ch<=122)
    {
        printf("The character is a lowercase alphabet");
    }
    else
    {
        printf("The character is a special character");
    }
    return 0;
}