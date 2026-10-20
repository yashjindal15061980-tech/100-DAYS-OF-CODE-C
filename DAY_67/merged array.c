
#include <stdio.h>

int main() {
    int m, n, i = 0, j = 0, k = 0;
    scanf("%d", &m);
    int a[m];

    for (int x = 0; x < m; x++)
        scanf("%d", &a[x]);

    scanf("%d", &n);
    int b[n], c[m + n];

    for (int x = 0; x < n; x++)
        scanf("%d", &b[x]);

    while (i < m && j < n) {
        if (a[i] < b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }

    while (i < m)
        c[k++] = a[i++];

    while (j < n)
        c[k++] = b[j++];

    for (int x = 0; x < m + n; x++)
        printf("%d ", c[x]);

    return 0;
}
