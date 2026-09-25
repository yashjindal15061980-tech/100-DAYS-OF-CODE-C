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

    int distinct = 1;

    if (rows == cols) {
        for (int i = 0; i < rows; i++) {
            for (int j = i + 1; j < rows; j++) {
                if (matrix[i][i] == matrix[j][j]) {
                    distinct = 0;
                    break;
                }
            }
            if (!distinct) {
                break;
            }
        }
    } else {
        distinct = 0;
    }

    printf("%s\n", distinct ? "True" : "False");
    return 0;
}