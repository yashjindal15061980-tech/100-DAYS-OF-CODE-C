#include <stdio.h>

int main(void) {
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int first = 1;

    /* Traverse diagonals from top-left to bottom-right.
       Each diagonal is printed from bottom to top. */
    for (int diagonal = 0; diagonal < rows + cols - 1; diagonal++) {
        int startRow = diagonal < rows ? diagonal : rows - 1;
        int startCol = diagonal < rows ? 0 : diagonal - rows + 1;

        while (startRow >= 0 && startCol < cols) {
            if (!first) {
                printf(" ");
            }
            printf("%d", matrix[startRow][startCol]);
            first = 0;

            startRow--;
            startCol++;
        }
    }

    printf("\n");
    return 0;
}