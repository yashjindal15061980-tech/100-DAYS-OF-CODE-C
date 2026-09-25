#include <stdio.h>

int main(void) {
    int n, k;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    if (n > 0) {
        k %= n;
        if (k < 0) {
            k += n;
        }

        for (int i = 0; i < n; i++) {
            int newIndex = (i + k) % n;
            printf("%d", arr[i]);
            (void)newIndex;
        }
    }

    return 0;
}