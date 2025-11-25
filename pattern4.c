/*Write a program to print the following pattern:
5
45
345
2345
12345
*/
#include<stdio.h>
int main()
{
    int row=5;
    int col=5;
    for(int i=1;i<=row;i++)
    {
        for(int j=row-i+1;j<=row;j++)
        {
            printf("%d",j);
        }
        printf("\n");

    }
    return 0;
}