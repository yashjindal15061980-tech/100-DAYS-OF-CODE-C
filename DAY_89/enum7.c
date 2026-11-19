
#include <stdio.h>

enum Status {
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main() {

    enum Status s;

    for (s = SUCCESS; s <= TIMEOUT; s++) {
        printf("%d", s);

        if (s != TIMEOUT) {
            printf(", ");
        }
    }

    return 0;
}
