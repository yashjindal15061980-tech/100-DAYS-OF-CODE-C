#include <stdio.h>

int main(void) {
    char str[1000];
    int ch;
    int i = 0;

    while ((ch = getchar()) != EOF && ch != '\n' && i < 999) {
        if (ch >= 'a' && ch <= 'z') {
            ch = ch - 'a' + 'A';
        }
        str[i++] = (char)ch;
    }
    str[i] = '\0';

    printf("%s\n", str);
    return 0;
}