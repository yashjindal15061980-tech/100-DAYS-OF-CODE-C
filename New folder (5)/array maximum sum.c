#include <stdio.h>

int main() {
    int a[100], n, k, i, j, sum, max = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &k);

    for (i = 0; i <= n - k; i++) {
        sum = 0;

        for (j = i; j < i + k; j++)
            sum += a[j];

        if (i == 0 || sum > max)
            max = sum;
    }

    printf("%d", max);

    return 0;
}