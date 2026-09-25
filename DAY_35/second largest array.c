#include <stdio.h>
#include <limits.h>

int main(void) {
    int n;
    scanf("%d", &n);

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < n; i++) {
        int value;
        scanf("%d", &value);

        if (value > largest) {
            secondLargest = largest;
            largest = value;
        } else if (value > secondLargest && value < largest) {
            secondLargest = value;
        }
    }

    if (secondLargest == INT_MIN) {
        printf("-1\n");
    } else {
        printf("%d\n", secondLargest);
    }

    return 0;
}