#include <stdio.h>

int main() {
    int arr[100], n, i, j, next;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < n; i++) {
        next = -1;

        for (j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                next = arr[j];
                break;
            }
        }

        if (i > 0)
            printf(", ");

        printf("%d", next);
    }

    return 0;
}