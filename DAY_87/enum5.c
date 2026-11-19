
#include <stdio.h>
#include <string.h>

enum Role {
    ADMIN,
    USER,
    GUEST
};

int main() {
    enum Role role;
    char input[20];

    scanf("%s", input);

    if (strcmp(input, "ADMIN") == 0)
        role = ADMIN;
    else if (strcmp(input, "USER") == 0)
        role = USER;
    else
        role = GUEST;

    switch (role) {
        case ADMIN:
            printf("Welcome Admin!");
            break;

        case USER:
            printf("Welcome User!");
            break;

        case GUEST:
            printf("Welcome Guest!");
            break;
    }

    return 0;
}
