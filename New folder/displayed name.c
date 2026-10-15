#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int i, start = 0, last = 0;

    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';

    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] == ' ')
            last = i + 1;
    }

    for (i = 0; i < last - 1; i++) {
        if (i == 0 || s[i - 1] == ' ')
            printf("%c.", s[i]);
    }

    printf(" %s", s + last);

    return 0;
}