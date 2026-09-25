#include <stdio.h>

int main(void) {
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    long long rowSums[rows];

    for (int i = 0; i < rows; i++) {
        rowSums[i] = 0;
        for (int j = 0; j < cols; j++) {
            int value;
            scanf("%d", &value);
            rowSums[i] += value;
        }
    }

    for (int i = 0; i < rows; i++) {
        if (i > 0) {
            printf(" ");
        }
        printf("%lld", rowSums[i]);
    }
    printf("\n");

    return 0;
}