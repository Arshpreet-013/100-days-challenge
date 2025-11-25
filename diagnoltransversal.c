//Perform diagonal traversal of a matrix.
#include <stdio.h>
int main() {
    int rows, cols, i, j;

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
        }
    }

    // Perform diagonal traversal
    printf("\nDiagonal Traversal of the matrix:\n");
    for (int d = 0; d < rows + cols - 1; d++) {
        // Determine the starting point of this diagonal
        int r = (d < cols) ? 0 : d - cols + 1;
        int c = (d < cols) ? d : cols - 1;

        // Traverse the diagonal
        while (r < rows && c >= 0) {
            printf("%d ", matrix[r][c]);
            r++;
            c--;
        }
        printf("\n");
    }

    return 0;
}