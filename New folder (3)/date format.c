#include <stdio.h>

int main() {
    char dd[3], mm[3], yyyy[5];

    scanf("%2[^/]/%2[^/]/%4s", dd, mm, yyyy);

    if (mm[0] == '0' && mm[1] == '4')
        printf("%s-Apr-%s", dd, yyyy);

    return 0;
}