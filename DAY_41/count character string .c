#include <stdio.h>

int main(void) {
    char str[1000];
    int count = 0;
    int ch;
    while ((ch = getchar()) != EOF && ch != '\n') {
        str[count++] = (char)ch;
    }

    str[count] = '\0';
    printf("%d\n", count);

    return 0;
}