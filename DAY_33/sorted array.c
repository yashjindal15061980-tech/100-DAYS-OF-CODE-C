#include <stdio.h>

int main()
{
    int n, i, j, x;
    int a[100];

    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &x);

    i = n - 1;

    while(i >= 0 && a[i] > x)
    {
        a[i + 1] = a[i];
        i--;
    }

    a[i + 1] = x;
    n++;

    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}