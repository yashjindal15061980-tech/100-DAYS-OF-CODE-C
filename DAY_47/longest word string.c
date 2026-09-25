#include <stdio.h>
#include <ctype.h>

int main(void) {
    char sentence[1000];
    int ch, length = 0;

    while ((ch = getchar()) != EOF && ch != '\n' && length < 999) {
        sentence[length++] = (char)ch;
    }
    sentence[length] = '\0';

    int longestStart = 0;
    int longestLength = 0;
    int i = 0;

    while (i < length) {
        while (i < length && isspace((unsigned char)sentence[i])) {
            i++;
        }

        int start = i;
        while (i < length && !isspace((unsigned char)sentence[i])) {
            i++;
        }

        int wordLength = i - start;
        if (wordLength > longestLength) {
            longestStart = start;
            longestLength = wordLength;
        }
    }

    for (int j = 0; j < longestLength; j++) {
        putchar(sentence[longestStart + j]);
    }
    putchar('\n');

    return 0;
}