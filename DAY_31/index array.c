#include <stdio.h>

int main() {
    int n, i, key, index = -1;
    int array[100];

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (array[i] == key) {
            index = i;
            break;
        }
    }

    if (index != -1) {
        printf("Found at index %d", index);
    } else {
        printf("-1");
    }

    return 0;
}