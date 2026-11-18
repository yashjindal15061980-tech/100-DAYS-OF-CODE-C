#include <stdio.h>
#include <string.h>

enum status {
    SUCCESS, FAILURE, TIMEOUT
};

int main() {
    char s[20];

    scanf("%s", s);

    if (strcmp(s, "SUCCESS") == 0)
        printf("Operation successful");
    else if (strcmp(s, "FAILURE") == 0)
        printf("Operation failed");
    else if (strcmp(s, "TIMEOUT") == 0)
        printf("Operation timed out");

    return 0;
}