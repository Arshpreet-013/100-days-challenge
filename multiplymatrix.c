//Multiply two matrices.
#include <stdio.h>
int main() {
    int rows1, cols1, rows2, cols2, i, j, k;
    printf("Enter number of rows for first matrix: ");
    scanf("%d", &rows1);
    printf("Enter number of columns for first matrix: ");
    scanf("%d", &cols1);
    printf("Enter number of rows for second matrix: ");
    scanf("%d", &rows2);
    printf("Enter number of columns for second matrix: ");
    scanf("%d", &cols2);
    if (cols1 != rows2) {
        printf("Matrix multiplication not possible with given dimensions.\n");
        return 0;
    }
    int matrix1[rows1][cols1];
    int matrix2[rows2][cols2];
    int product[rows1][cols2];
    // Read first matrix elements
    printf("Enter the elements of the first matrix:\n");
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }
    // Read second matrix elements
    printf("Enter the elements of the second matrix:\n");
    for (i = 0; i < rows2; i++) {
        for (j = 0; j < cols2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }
    // Initialize product matrix to zero
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols2; j++) {
            product[i][j] = 0;
        }
    }
    // Calculate product of the two matrices
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols2; j++) {
            for (k = 0; k < cols1; k++) {
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    // Print product matrix 
    printf("\nProduct of the two matrices:\n");
    for (i = 0; i < rows1; i++) {
        for (j = 0; j < cols2; j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }
    return 0;
}