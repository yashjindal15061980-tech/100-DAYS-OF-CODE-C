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

    int symmetric = (rows == cols);

    if (symmetric) {
        for (int i = 0; i < rows; i++) {
            for (int j = i + 1; j < cols; j++) {
                if (matrix[i][j] != matrix[j][i]) {
                    symmetric = 0;
                    break;
                }
            }
            if (!symmetric) {
                break;
            }
        }
    }

    printf("%s\n", symmetric ? "True" : "False");
    return 0;
}