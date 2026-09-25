#include <stdio.h>

int main(void) {
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    long long sum = 0;
    for (int i = 0; i < rows * cols; i++) {
        int value;
        scanf("%d", &value);
        sum += value;
    }

    printf("%lld\n", sum);
    return 0;
}