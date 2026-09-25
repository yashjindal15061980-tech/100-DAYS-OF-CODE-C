#include <stdio.h>

int main() {
    long long num;
    int count[10] = {0};

    if (scanf("%lld", &num) != 1) return 0;

    if (num < 0) {
        num = -num;
    }

    if (num == 0) {
        count[0] = 1;
    }

    while (num > 0) {
        int digit = num % 10;
        count[digit]++;
        num = num / 10;
    }

    int max_digit = 0;
    int max_count = count[0];

    for (int i = 1; i < 10; i++) {
        if (count[i] > max_count) {
            max_count = count[i];
            max_digit = i;
        }
    }

    printf("%d\n", max_digit);

    return 0;
}