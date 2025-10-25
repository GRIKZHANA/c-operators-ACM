#include <stdio.h>

int main() {
    int a = 3, b = 4, c = 5;

    if ((a * a + b * b) == (c * c)) {
        printf("It is a right triangle.\n");
    } else {
        printf("It is not a right triangle.\n");
    }

    return 0;
}
