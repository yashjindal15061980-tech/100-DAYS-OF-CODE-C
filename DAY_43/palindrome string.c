#include <stdio.h>

int main(void) {
    char str[1000];
    int ch;
    int length = 0;

    while ((ch = getchar()) != EOF && ch != '\n' && length < 999) {
        str[length++] = (char)ch;
    }

    int palindrome = 1;
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            palindrome = 0;
            break;
        }
    }

    if (palindrome) {
        printf("Palindrome\n");
    } else {
        printf("Not palindrome\n");
    }

    return 0;
}