#include <stdio.h>

int main(void) {
    char str[1000];
    int ch;
    int length = 0;

    while ((ch = getchar()) != EOF && ch != '\n' && length < 999) {
        str[length++] = (char)ch;
    }

    for (int i = length - 1; i >= 0; i--) {
        putchar(str[i]);
    }
    putchar('\n');

    return 0;
}