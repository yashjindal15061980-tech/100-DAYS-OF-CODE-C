#include <stdio.h>

int main(void) {
    int ch;
    int spaces = 0, digits = 0, special = 0;

    while ((ch = getchar()) != EOF && ch != '\n') {
        if (ch == ' ') {
            spaces++;
        } else if (ch >= '0' && ch <= '9') {
            digits++;
        } else if (!((ch >= 'a' && ch <= 'z') ||
                     (ch >= 'A' && ch <= 'Z'))) {
            special++;
        }
    }

    printf("Spaces=%d, Digits=%d, Special=%d\n", spaces, digits, special);
    return 0;
}