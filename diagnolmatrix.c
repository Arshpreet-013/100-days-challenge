//Check if the elements on the diagonal of a matrix are distinct.
#include <stdio.h>
int main() {
    int rows, cols, i, j;
    int isDistinct = 1; // Assume distinct until proven otherwise
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);
    if (rows != cols) {
        printf("Matrix is not square; diagonal elements cannot be distinct.\n");
        return 0;
    }
    int matrix[rows][cols];
    // Read matrix elements
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    // Check for distinct diagonal elements 
    for (i = 0; i < rows; i++) {
        for (j = i + 1; j < cols; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                isDistinct = 0; // Not distinct
                break;
            }
        }
        if (!isDistinct) {
            break;
        }
    }
    // Print result
    if (isDistinct) {
        printf("Diagonal elements are distinct.\n");
    } else {
        printf("Diagonal elements are not distinct.\n");
    }
    return 0;
}