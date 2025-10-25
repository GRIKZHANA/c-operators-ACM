#include <stdio.h>

int main() {
    int age = 19;
    int income = 25000;

    if (age >= 21 && income >= 30000) {
        printf("The person qualifies for a loan.\n");
    } else {
        printf("The person does not qualify for a loan.\n");
    }

    return 0;
}
