#include <stdio.h>

int main() {
    char s[100];
    int i;

    fgets(s, sizeof(s), stdin);

    for (i = 0; s[i] != '\0'; i++) {
        if (i == 0 || s[i - 1] == ' ')
            printf("%c.", s[i]);
    }

    return 0;
}