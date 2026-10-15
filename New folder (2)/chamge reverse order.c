#include <stdio.h>
#include <string.h>

int main() {
    char s[200];
    int i, start = 0, end;

    fgets(s, sizeof(s), stdin);

    for (i = 0; ; i++) {
        if (s[i] == ' ' || s[i] == '\n' || s[i] == '\0') {
            end = i - 1;

            while (start < end) {
                char temp = s[start];
                s[start] = s[end];
                s[end] = temp;
                start++;
                end--;
            }

            if (s[i] == '\0' || s[i] == '\n')
                break;

            start = i + 1;
        }
    }

    printf("%s", s);
    return 0;
}