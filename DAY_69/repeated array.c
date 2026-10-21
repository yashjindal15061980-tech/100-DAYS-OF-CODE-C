#include <stdio.h>

int main()
{
    int n, i, x;
    int arr[100], seen[1000] = {0};

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++)
    {
        x = arr[i];

        if(seen[x] == 1)
        {
            printf("%d", x);
            return 0;
        }

        seen[x] = 1;
    }

    return 0;
}