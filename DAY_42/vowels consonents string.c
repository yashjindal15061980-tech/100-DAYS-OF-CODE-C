#include <stdio.h>
#include <ctype.h>

int main(void) {
    char str[1000];
    int vowels = 0, consonants = 0;
    int ch, i = 0;

    /* Read a line, including spaces. */
    while ((ch = getchar()) != EOF && ch != '\n' && i < 999) {
        str[i++] = (char)ch;
    }
    str[i] = '\0';

    for (int j = 0; str[j] != '\0'; j++) {
        if (isalpha((unsigned char)str[j])) {
            char c = (char)tolower((unsigned char)str[j]);

            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    printf("Vowels=%d, Consonants=%d\n", vowels, consonants);
    return 0;
}