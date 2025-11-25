//Check if a matrix is symmetric.
#include <stdio.h>
int main() {
    int rows, cols, i, j;
    int isSymmetric = 1; // Assume symmetric until proven otherwise

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    if (rows != cols) {
        printf("Matrix is not symmetric (not square).\n");
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

    // Check for symmetry
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0; // Not symmetric
                break;
            }
        }
        if (!isSymmetric) {
            break;
        }
    }

    // Print result
    if (isSymmetric) {
        printf("Matrix is symmetric.\n");
    } else {
        printf("Matrix is not symmetric.\n");
    }

    return 0;
}