//Find the sum of all elements in a matrix.
#include <stdio.h>

int main() {
    int rows, cols, i, j;
    int sum = 0;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];

    // Read matrix elements
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];     // Add to sum while reading
        }
    }

    // Print sum
    printf("\nSum of all elements in the matrix = %d\n", sum);

    return 0;
}
 
