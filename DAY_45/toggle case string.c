#include <stdio.h>

int main(void) {
    int ch;

    while ((ch = getchar()) != EOF && ch != '\n') {
        if (ch >= 'a' && ch <= 'z') {
            ch = ch - 'a' + 'A';
        } else if (ch >= 'A' && ch <= 'Z') {
            ch = ch - 'A' + 'a';
        }
        putchar(ch);
    }

    putchar('\n');
    return 0;
}