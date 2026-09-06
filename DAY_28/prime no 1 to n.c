#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    for (int num = 2; num <= n; num++) {
        int isPrime = 1;

        for (int divisor = 2; divisor * divisor <= num; divisor++) {
            if (num % divisor == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime) {
            printf("%d ", num);
        }
    }

    return 0;
}