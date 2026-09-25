#include <stdio.h>

int main(void) {
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    long long sum = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            int value;
            scanf("%d", &value);

            if (i == j) {
                sum += value;
            }
        }
    }

    printf("%lld\n", sum);
    return 0;
}