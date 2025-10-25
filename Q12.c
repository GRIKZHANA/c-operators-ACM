#include <stdio.h>

int main() {
    int raining = 1;      // 1 means it's raining
    int umbrella = 0;     // 0 means no umbrella

    if (raining && !umbrella) {
        printf("You will get wet.\n");
    } else {
        printf("You will not get wet.\n");
    }

    return 0;
}
