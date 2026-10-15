#include <stdio.h>

int main() {
    int a[100], ans[100], n, i, j, p;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++) {
        p = 1;

        for (j = 0; j < n; j++) {
            if (i != j)
                p *= a[j];
        }

        ans[i] = p;
    }

    printf("[");
    for (i = 0; i < n; i++) {
        if (i > 0)
            printf(",");
        printf("%d", ans[i]);
    }
    printf("]");

    return 0;
}