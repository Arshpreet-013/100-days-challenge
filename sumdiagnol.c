//Find the sum of main diagonal elements for a square matrix.
#include <stdio.h>
int main() {
    int rows, cols, i, j;
    int diagonalSum = 0;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    if (rows != cols) {
        printf("Matrix is not square; cannot compute main diagonal sum.\n");
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

    // Calculate sum of main diagonal elements
    for (i = 0; i < rows; i++) {
        diagonalSum += matrix[i][i];
    }

    // Print diagonal sum
    printf("\nSum of main diagonal elements = %d\n", diagonalSum);

    return 0;
}