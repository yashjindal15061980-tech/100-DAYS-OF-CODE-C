#include <stdio.h>

int main(void) {
    int n, position, value;

    scanf("%d", &n);

    int arr[n + 1];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d %d", &position, &value);

    /* Position is 1-based. Shift elements right to make space. */
    for (int i = n; i >= position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position - 1] = value;

    for (int i = 0; i <= n; i++) {
        if (i > 0) {
            printf(" ");
        }
        printf("%d", arr[i]);
    }
    printf("\n");

    return 0;
}