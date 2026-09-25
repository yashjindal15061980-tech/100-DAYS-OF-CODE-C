#include <stdio.h>

int main(void) {
    int ch;

    while ((ch = getchar()) != EOF && ch != '\n') {
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' &&
            ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U') {
            putchar(ch);
        }
    }

    putchar('\n');
    return 0;
}