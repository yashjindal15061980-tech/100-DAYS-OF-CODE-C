#include <stdio.h>

int main() {
    int number, original, digit, sum = 0, factorial;

    scanf("%d", &number);

    original = number;

    while (number > 0) {
        digit = number % 10;
        factorial = 1;

        for (int i = 1; i <= digit; i++) {
            factorial *= i;
        }

        sum += factorial;
        number /= 10;
    }

    if (sum == original)
        printf("Strong number");
    else
        printf("Not strong number");

    return 0;
}