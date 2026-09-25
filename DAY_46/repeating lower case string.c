#include <stdio.h>

int main(void) {
    char str[1000];
    int frequency[26] = {0};
    int ch, length = 0;

    while ((ch = getchar()) != EOF && ch != '\n' && length < 999) {
        str[length++] = (char)ch;
    }

    for (int i = 0; i < length; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            int index = str[i] - 'a';
            if (frequency[index] > 0) {
                printf("%c\n", str[i]);
                return 0;
            }
            frequency[index]++;
        }
    }

    printf("-1\n");
    return 0;
}