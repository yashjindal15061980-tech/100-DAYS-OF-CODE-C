#include <stdio.h>

int main(void) {
    char str[1000];
    int ch, length = 0;
    int target;

    while ((ch = getchar()) != EOF && ch != '\n' && length < 999) {
        str[length++] = (char)ch;
    }

    target = getchar();

    int count = 0;
    for (int i = 0; i < length; i++) {
        if (str[i] == target) {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}