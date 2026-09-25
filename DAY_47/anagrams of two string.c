#include <stdio.h>

int main(void) {
    int frequency[256] = {0};
    int ch;

    /* Count characters in the first string. */
    while ((ch = getchar()) != EOF && ch != '\n') {
        frequency[(unsigned char)ch]++;
    }

    /* Subtract characters in the second string. */
    while ((ch = getchar()) != EOF && ch != '\n') {
        frequency[(unsigned char)ch]--;
    }

    int anagrams = 1;
    for (int i = 0; i < 256; i++) {
        if (frequency[i] != 0) {
            anagrams = 0;
            break;
        }
    }

    printf("%s\n", anagrams ? "Anagrams" : "Not anagrams");
    return 0;
}