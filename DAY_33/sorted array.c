#include <stdio.h>

int main(void) {
    int n, value;
    scanf("%d", &n);

    int arr[n + 1];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &value);

    int position = n;
    while (position > 0 && arr[position - 1] > value) {
        arr[position] = arr[position - 1];
        position--;
    }

    arr[position] = value;

    for (int i = 0; i <= n; i++) {
        if (i > 0) {
            printf(" ");
        }
        printf("%d", arr[i]);
    }
    printf("\n");

    return 0;
}