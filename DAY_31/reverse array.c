#include <stdio.h>

int main() {
    int n, i, temp;
    int array[100];

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    for (i = 0; i < n / 2; i++) {
        temp = array[i];
        array[i] = array[n - 1 - i];
        array[n - 1 - i] = temp;
    }

    for (i = 0; i < n; i++) {
        printf("%d", array[i]);

        if (i < n - 1) {
            printf(" ");
        }
    }

    return 0;
}