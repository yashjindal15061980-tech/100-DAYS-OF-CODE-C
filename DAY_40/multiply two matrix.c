#include <stdio.h>

int main(void) {
    int rowsA, colsA, rowsB, colsB;

    scanf("%d %d", &rowsA, &colsA);

    int a[rowsA][colsA];
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsA; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    scanf("%d %d", &rowsB, &colsB);

    int b[rowsB][colsB];
    for (int i = 0; i < rowsB; i++) {
        for (int j = 0; j < colsB; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    if (colsA != rowsB) {
        printf("-1\n");
        return 0;
    }

    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            long long sum = 0;
            for (int k = 0; k < colsA; k++) {
                sum += (long long)a[i][k] * b[k][j];
            }

            if (j > 0) {
                printf(" ");
            }
            printf("%lld", sum);
        }
        printf("\n");
    }

    return 0;
}