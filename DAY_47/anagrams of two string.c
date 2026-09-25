#include <stdio.h>

int main(void) {
    int frequency[256] = {0};
    int ch;
    while ((ch = getchar()) != EOF && ch != '\n') {
        frequency[(unsigned char)ch]++;
    }
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