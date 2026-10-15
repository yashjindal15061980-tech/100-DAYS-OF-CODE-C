#include <stdio.h>
#include <string.h>

int main() {
    char a[100], b[100];

    scanf("%s %s", a, b);

    if (strlen(a) == strlen(b) && strstr(strcat(a, a), b))
        printf("Rotation");
    else
        printf("Not rotation");

    return 0;
}