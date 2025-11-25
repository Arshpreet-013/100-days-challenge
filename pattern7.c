/*Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*
*/
#include <stdio.h>

int main() {
    int blocks[] = {1, 3, 5, 3, 1};  // Number of stars in each block
    int i, j;

    for (i = 0; i < 5; i++) {
        // Print each block
        for (j = 0; j < blocks[i]; j++) {
            printf("*\n");
        }

        // Print blank line between blocks (except after the last one)
        if (i < 4) {
            printf("\n");
        }
    }

    return 0;
}
