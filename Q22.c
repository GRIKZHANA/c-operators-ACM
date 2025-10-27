#include <stdio.h>

int main() {
    int age;
    printf("Enter the person's age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("The person is an adult.\n");
    } else {
        printf("The person is not an adult.\n");
    }

    return 0;
}
