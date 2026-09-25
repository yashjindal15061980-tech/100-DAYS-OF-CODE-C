#include <stdio.h>

int main(void) {
    char str[1000];
    int ch;
    int i = 0;
    while ((ch = getchar()) != EOF && ch != '\n' && i < 999) {
        str[i++] = (char)ch;
    }
    str[i] = '\0';

    for (int j = 0; str[j] != '\0'; j++) {
        printf("%c\n", str[j]);
    }

    return 0;
}