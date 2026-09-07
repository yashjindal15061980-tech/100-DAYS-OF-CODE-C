#include <stdio.h>

int main() {
    int n, i;
    int array[100], max, min;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    max = array[0];
    min = array[0];

    for (i = 1; i < n; i++) {
        if (array[i] > max) {
            max = array[i];
        }

        if (array[i] < min) {
            min = array[i];
        }
    }

    printf("Max=%d, Min=%d", max, min);

    return 0;
}