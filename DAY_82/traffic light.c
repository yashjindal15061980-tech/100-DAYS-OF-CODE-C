#include <stdio.h>
#include <string.h>

enum traffic {
    RED, YELLOW, GREEN
};

int main() {
    char light[20];

    scanf("%s", light);

    if (strcmp(light, "RED") == 0)
        printf("Stop");
    else if (strcmp(light, "YELLOW") == 0)
        printf("Wait");
    else if (strcmp(light, "GREEN") == 0)
        printf("Go");

    return 0;
}